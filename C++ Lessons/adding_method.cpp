//Adding method

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

};


int main()
{

    dot n1;
    dot n2;

    n1.assingValue(2,7);
    n1.writeScreen();

    n2.assingValue(11,28);
    n2.writeScreen();


    return 0;
}