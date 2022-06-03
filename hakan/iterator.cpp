#include <iostream>
#include <vector>
using namespace std;

/*
template <typename T>

T square(T value){
    return value*value; }
*/

template <typename T>
void print(vector<T>& v){

    typename vector<T>::iterator i = v.begin();
    while(i != v.end())
        cout << *i++ << " ";   
        
    cout << endl;

}

int main(){

    vector <int> v;
    vector <int> v1(5,10);
    vector <int> v2(10);
    vector <int> v4(&v2[5],&v2[9]);
    vector <int> v5(v1);

    
    print(v);
    print(v1);
    print(v2);
    print(v4);
    print(v5);

    
    
    return 0;
}