#include <iostream>
using namespace std;

struct Rectangle {
    int width,height;
    Rectangle(int w, int h){

        width = w;
        height = h;
    }

    void printOfArea(){
    cout << "Area of Rectangle is : " << (width*height);

    }
};

int main(){

struct Rectangle rc = Rectangle(8,8);

rc.printOfArea();

return 0;

}