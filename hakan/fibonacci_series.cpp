/*

#include <iostream>  
using namespace std;  
int main() { 
    int n1 = 0, n2 = 1, n3, number;
    cout << "Enter the number of elements : ";
    cin >> number;

    cout << n1 << " " << n2 << " ";

    for(int i=2; i<number; i++)
    {
        n3=n1+n2;
        cout << n3 << " ";

        n1=n2;
        n2=n3;
    }

    return 0;
 }


*/


#include <iostream>  
using namespace std;  
void printFibbo(int n){
    static int n1 = 0, n2 = 1, n3;
    if (n>0){
        n3= n1 + n2;
        n1 = n2;
        n2 = n3;

        cout << n3 << " ";
        printFibbo(n-1);
    }
}
int main() { 
    int n;
    cout << "Enter number of Elements : ";
    cin >> n;

    cout<< "Fibonacci Series : ";
    cout << "0 " << "1 ";

    printFibbo(n-2);


    return 0;

}

