//Constructer
#include <iostream>
using namespace std;

class dot
{
    private:
        int x,y;

    public:
        dot();//Constructer
        dot(int,int);//Constructer
        
        int getX();
        int getY();

        void setX(int);
        void setY(int);

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

dot::dot(){
    x = 22;
    y = 1;
}//Constructer

dot::dot(int x, int y = 8){
    this-> x = x;
    this-> y = y;
}//Constructer


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
    dot d2(28);
    
    
    cout << d1.getX() << " " << d1.getY() << endl;
    cout << d2.getX() << " " << d2.getY() << endl;
   

    return 0;
}
