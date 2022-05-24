#include <iostream>
using namespace std;

class Column{
    private:
    
    int* data;
    int size;

    public:
        Column(int size = 1) : size(size){
            data = new int[size];
            cout << size << " elemanli bir dizi olusturuldu." << endl;
        }

        Column(const Column& k){
            this ->size = k.size;
            data = new int[size];
            for (int i = 0; i < size; i++)
                data[i] = k.data[i];
            cout << " kopyalama kurucusu çalıştı " << endl;
            }

         ~Column(){
            delete[] data; 
            cout << "Yikici calisti - dizi silindi." << endl;}
        

        int getsize(){
            return size;}

        void setsize(int size){
            this -> size = size;}
         
        void print()const{
            for(int i = 0; i < size; i++)
            cout << data[i] << " " << endl;
        }                    
};

int main(){
    Column k(5);
    Column k2 = k;

    k.print();
    k2.print();



    return 0;
}