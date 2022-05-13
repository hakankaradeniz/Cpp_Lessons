//encapsulation

#include <iostream>


class dot
{
    private:
        int x,y;

    public:

        
        int getX();
        int getY();

        void setX(int);
        void setY(int);

};




int dot::getX(){
    return x;
}
int dot::getY(){
    return y;  
}
void dot::setX(int _x){
    
    x=_x;
}
void dot::setY(int _y){
    y=_y;
}




int main()
{
    
    dot d1;
    
    d1.setX(28);
    d1.setY(61);

    std::cout << d1.getX() << " " << d1.getY() << std::endl;


    return 0;
}