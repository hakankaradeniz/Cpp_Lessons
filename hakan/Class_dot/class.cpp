#include <iostream>
using namespace std;
#include "dot.h"


int main()
{

    dot d1(28,34,34);
    dot d2(d1);
    cout << d1.z << endl;
    cout << d2.z << endl;

    return 0;
}
