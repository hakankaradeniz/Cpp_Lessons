#include <iostream>  
using namespace std;  


class cat{
    public:
        virtual void Voice(){
            cout << "meow" << endl;
        }
};

class lion : public cat{
    public:
        void Voice(){
            cout << "Roar" << endl;
        }
};

int main () {  

    cat c;
    lion l;
    
    c.Voice();
    l.Voice();

    cat* array[2];
    array[0] = &c; 
    array[1] = &l;

    cout << endl;

    array[0]->Voice();
    array[1]->Voice();

    return 0;
}