//Bool

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

    n1.assingValue(2,7);
    n1.writeScreen();

    n2.assingValue(0,0);
    n2.writeScreen();

    if(n1.zero())
        std::cout << " n1 is Zero" << std::endl;


    if(n2.zero())
        std::cout << " n2 is Zero" << std::endl;

    return 0;
}