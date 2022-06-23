//to print a pattern of numbers
#include <iostream>
using namespace std;

int main()
{
    int n = 5, i, j, num = 1;
    
 
    for ( j = 1 ; j <= n ; j++ )
    {
        num = j;
        
        for ( i = 1 ; i <= j ; i++ )
        {
            cout << num;
            num++;
        }

        num--;

        for ( i = 1 ; i < j ; i++)
        {
            num--;
            cout << num;
        
        }
        cout << "\n";
    }
    return 0;
}
