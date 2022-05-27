#include <iostream>
#include <vector>
using namespace std;

/*
template <typename T>

T square(T value){
    return value*value; }
*/

int main(){

    vector <int> v;
    vector <int> v1(5,10);
    vector <int> v2(10);
    vector <int> v4(&v2[5],&v2[8]);
    vector <int> v5(v1);
    
    return 0;
}