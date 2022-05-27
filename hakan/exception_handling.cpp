#include <iostream>
using namespace std;

class fault: public exception{
    public: char* hata(){
        return "something went wrong";    }
};

class fault_two: public exception{
    public: char* hata(){
        return "another something went wrong";    }
};


class trying {
    public:
        int f(int x){
            if(x == 0){
                throw fault();}
            if(x == 5){
                throw fault_two(); } 
            }
};


int main(){
    
    trying A;
    trying B;

    try{
        
    B.f(5);

    }catch(exception e){
        cout << "general fault" << endl;
    }
    return 0;
}