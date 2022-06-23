//Defining Objects as Pointers or Arrays

#include <iostream>


class dot{

    public:
    int x,y;
    void assingValue(int _x, int _y){
        x = _x;
        y = _y;
    }

    void writeScreen(){
        std::cout << x << "," << y << std::endl;
    }

    bool zero()
    {
        if(x == 0 && y == 0)
            return true;
        else
            return false;
    }

};


int main()
{

    dot n1;
    dot n2;
    dot* n3;
    n3 = &n2;
    dot* n4;
    n4 = new dot();

    dot array[10];
    dot* pArray;
    pArray = new dot[10];

    for (int i = 0; i < 10; i++)
    {
        array[i].assingValue(i,i+2);
        (pArray + sizeof(dot) * i) -> assingValue(i+11,i+12);
    }
    
    for (int i = 0; i < 10; i++)
    {
        array[i].writeScreen();
        (pArray + sizeof(dot) * i) -> writeScreen();
        std::cout << std::endl;
    }
    


    n1.assingValue(2,7);
    n1.writeScreen();

    n2.assingValue(0,0);
    n2.writeScreen();

    if(n1.zero())
        std::cout << "n1 is Zero" << std::endl;


    if(n2.zero())
        std::cout << "n2 is Zero" << std::endl;

    std::cout << " n3 pointer " << std::endl;
    n3 -> writeScreen();

    n4 ->assingValue(999,888);
    n4 ->writeScreen();




    return 0;
}