#include <iostream>
using namespace std;

class fault: public exception{
    public: char* hata(){
        return "something went wrong";    }
};

class trying {
    public:
        int f(int x){
            if(x == 0){
                throw fault();      }        }
};


int main(){
    
    trying A;
    A.f(0);

    return 0;
}