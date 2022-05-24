#ifndef EXAMPLE_H  
#define EXAMPLE_H 
#include <iostream>
//using namespace std;

class Example{
    private:
    int x,y;

    public:
    Example (int x, int y);
    
    int getX();
    int getY();

    void setX(int);
    void setY(int);

    friend std::ostream& operator << (std::ostream&out, Example& n);

};

#endif