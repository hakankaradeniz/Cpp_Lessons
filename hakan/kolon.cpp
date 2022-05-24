#include <iostream>
using namespace std;

class Kolon{
    private:
    
    int* data;
    int boyut;

    public:
        Kolon(int boyut = 1) : boyut(boyut){
            data = new int[boyut];
            cout << boyut << " elemanli bir dizi olusturuldu." << endl;
        }

        Kolon(const Kolon& k){
            this ->boyut = k.boyut;
            data = new int[boyut];
            for (int i = 0; i < boyut; i++)
                data[i] = k.data[i];
            cout << " kopyalama kurucusu çalıştı " << endl;
            }

         ~Kolon(){
            delete[] data; 
            cout << "Yikici calisti - dizi silindi." << endl;}
        

        int getBoyut(){
            return boyut;}

        void setBoyut(int boyut){
            this -> boyut = boyut;}
         
        void print()const{
            for(int i = 0; i < boyut; i++)
            cout << data[i] << " " << endl;
        }                    
};

int main(){
    Kolon k(5);
    Kolon k2 = k;

    k.print();
    k2.print();



    return 0;
}