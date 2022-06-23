//Dynamic Memory Management

#include <iostream>

int main()
{

    int* pInt = new int(5);

    int* pArray = new int[10];

    for (int i = 0; i < 10; i++)
    {
        *(pArray +i) = i;
    }
    
    for (int i = 0; i < 10; i++)
       std::cout << pArray[i] << std::endl;    

    delete[] pArray;
    delete pInt;
    

    std:: cout << pInt << std::endl;



}