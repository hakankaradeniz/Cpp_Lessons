/*
at()	    It provides a reference to an element.
back()  	It gives a reference to the last element.
front() 	It gives a reference to the first element.
swap()	    It exchanges the elements between two vectors.
push_back()	It adds a new element at the end.
pop_back()	It removes a last element from the vector.
empty()	    It determines whether the vector is empty or not.
insert()	It inserts new element at the specified position.
erase()	    It deletes the specified element.
resize()	It modifies the size of the vector.
clear() 	It removes all the elements from the vector.
size()  	It determines a number of elements in the vector.
capacity()	It determines the current capacity of the vector.
assign()	It assigns new values to the vector.
operator=()	It assigns new values to the vector container.
operator[]()	It access a specified element.
end()	    It refers to the past-lats-element in the vector.
emplace()	It inserts a new element just before the position pos.
emplace_back()	It inserts a new element at the end.
rend()	    It points the element preceding the first element of the vector.
rbegin()	It points the last element of the vector.
begin()	    It points the first element of the vector.
max_size()	It determines the maximum size that vector can hold.
cend()	    It refers to the past-last-element in the vector.
cbegin()	It refers to the first element of the vector.
crbegin()	It refers to the last character of the vector.
crend()	    It refers to the element preceding the first element of the vector.
data()  	It writes the data of the vector into an array.
shrink_to_fit()	It reduces the capacity and makes it equal to the size of the vector.
*/

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