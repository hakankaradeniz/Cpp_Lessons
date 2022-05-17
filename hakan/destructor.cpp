// Destructor
#include <iostream>
using namespace std;

class dot
{
private:
    int x, y;

public:
    int *z;
    dot();          // Constructer
    dot(int, int);  // Constructer
    ~dot();         // Destructor

    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void assingValue(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void writeScreen()
    {
        std::cout << x << "," << y << std::endl;
    }

    bool zero()
    {
        if (x == 0 && y == 0)
            return true;
        else
            return false;
    }
};

dot::dot()
{
    cout << "constructor without parameter" << endl;
    x = 22;
    y = 1;
    z = new int(6);
}

dot::dot(int x, int y = 8)
{
    this->x = x;
    this->y = y;
}

int dot::getX()
{
    return x;
}
int dot::getY()
{
    return y;
}
void dot::setX(int _x)
{
    x = _x;
}
void dot::setY(int _y)
{
    y = _y;
}

dot::~dot()
{
    cout << "destructor started" << endl;
    delete z;
}

int main()
{

    dot d1;
    
    

    return 0;
}
