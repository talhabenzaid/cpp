#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;

    a.setRawBits(42);
    std::cout << "Raw bits: " << a.getRawBits() << std::endl;

    return 0;
}
