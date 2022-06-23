//Definition of Class & Object

#include <iostream>


class dot{

    public:
    int x,y;

};


int main()
{

    dot n;

    n.x = 0;
    n.y = 5;

    std::cout << n.x << "," << n.y << std::endl;

    


    return 0;
}