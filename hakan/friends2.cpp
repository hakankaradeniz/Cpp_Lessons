#include <iostream>

using namespace std;


class A 
{   
    private:
        int x;
    public:
        int getX();
        void setX(int);
        friend std::ostream& operator << (ostream&,A&);
};


int A::getX(){return x;}

void A::setX(int _x){ x = _x;}

ostream& operator << (ostream& o,A&a){
    o << "x of A class" << a.x;
    return o;
}

void asdf(A &a){
    
}

int main()
{
    A a;
    a.setX(5);

    cout<< a;

    return 0;
}