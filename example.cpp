#include "example.h"

Example::Example(int x, int y) : x(x),y(y) {    }
Example::getX()const { return x; }
Example::getY()const { return y; }

void Example::setX(int x) { this ->x = x; }
void Example::setY(int y) { this ->y = y; }

std::ostream& operator<<(std::ostream& out, Example& n){
    out << n.x << " , " << n.y;
    return out;
}