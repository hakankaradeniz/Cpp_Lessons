// Namespace

#include <iostream>


namespace coder1{

    int x = 1;
    void Foo()
    {
        int x = 3;
        std::cout << x << std::endl;
    }
}

namespace coder2{

    int x = 5;
    void Boo()
    {
        int x = 9;
        std::cout << x << std::endl;
    }

}


int main()
{

    int x = 10;

    std::cout << x << std::endl;
    std::cout << coder1::x << std::endl;
    std::cout << coder2::x << std::endl;
    coder1::Foo();
    coder2::Boo();

    return 0;
}