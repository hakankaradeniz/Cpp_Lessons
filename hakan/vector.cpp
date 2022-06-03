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

    /*
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

    */

    vector<int> v6;
    v6.insert(v6.begin(),5);
    v6.insert(v6.end(),10);
    v6.insert(v6.begin(),7);
    v6.push_back(88);
    v6.pop_back();
    print(v6);
  //  cout << v6.empty() << endl;
    cout << v6.size(); 
    cout << v6.capacity() << endl;

    vector<int> v7;

    for(int i= 0 ; i<10; i++ )
        v7.push_back(i*2);
    
    print(v7);

    v6.insert(v6.begin(),&v7[2],&v7[5]);
    print(v6);
    v6.insert(v6.end(),&v7[2],&v7[5]);
    print(v6);
    
    return 0;
}