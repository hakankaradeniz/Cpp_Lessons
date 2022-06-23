#include <iostream>

class B;

class A 
{   
    private:
        int x;
    public:
        int getX();
        void setX(int);
        friend void Foo(A&);
        void setY(B&);
};

class B
{
    private:
        int y;
    public:
        int getY();
        void setY(int);
        friend class A;
};

int A::getX(){return x;}

void A::setX(int _x){ x = _x;}

void A::setY(B&y){ y.y = 100;}

void Foo(A&a){a.x = 0;}

int B::getY(){return y;}

void B::setY(int _y) { y = _y;}


int main()
{
    A n;

    n.setX(5);
    std::cout << n.getX() << std::endl;

    Foo(n);
    std::cout << n.getX() << std::endl;

    B b;
    b.setY(28);
    std::cout << b.getY() << std::endl;

    n.setY(b);
    std::cout << b.getY() << std::endl;

    return 0;
}