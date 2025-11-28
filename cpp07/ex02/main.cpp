#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    Array<int> b = a;
    b[1] = 10;

    Array<int> c;
    c = b;

    std::cout << "a[1] = " << a[1] << "\n";
    std::cout << "b[1] = " << b[1] << "\n";
    std::cout << "b[1] = " << c[1] << "\n";

    std::cout << a.size() << std::endl;

    try {
        std::cout << a[5] << "\n";
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }
}
