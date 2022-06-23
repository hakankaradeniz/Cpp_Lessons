//struct & typedef
#include <iostream>


struct dot
{

    int x,y;

};

typedef int* pInt;
typedef int array[5];




int main()
{
    dot example;
    example.x = 5;
    example.y = 28;

    dot* pDot;
    pDot = new dot();

    pDot -> x = 33;
    pDot -> y = 34;

    
    std::cout << example.x << " , " << example.y << std::endl;

    std::cout << pDot -> x  << " , " << pDot -> y << std::endl;
    
    pInt ptr;
    ptr =  new int();

    array a; 

    std::cout << ptr << std::endl;
        
    std::cout << a << std::endl;

    std::cout << *ptr << std::endl;


    return 0;
}