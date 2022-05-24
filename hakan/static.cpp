#include <iostream>  

using namespace std;  

void Foo() {    

   static int a=0;  //static variable    
   int b=0;         //local variable 

   a++;    
   b++;    

   cout<<"a=" << a <<" and b=" <<b<<endl;    
}    

int main()  
{  
 Foo();    
 Foo();    
 Foo();    
}  