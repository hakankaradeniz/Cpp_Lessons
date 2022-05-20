#ifndef _DOT_H_
#define _DOT_H_

class dot
{
private:
    int x, y;

public:
    int *z;
    const int t;
    dot();          // Constructor
    dot(int, int, int);  // Constructor
    dot (const dot&); // Copy Constructor
    ~dot();         // Destructor

    int getX();
    int getY();

    void setX(int);
    void setY(int);
/////////////////////////////////////////////////////////////////////////////////

    void assingValue(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
/////////////////////////////////////////////////////////////////////////////////

    void writeScreen()
    {
        std::cout << x << "," << y << std::endl;
    }
/////////////////////////////////////////////////////////////////////////////////

    bool zero()
    {
        if (x == 0 && y == 0)
            return true;
        else
            return false;
    }
};

#include "dot.cpp"
#endif 