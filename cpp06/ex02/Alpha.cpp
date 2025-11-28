#include "Alpha.hpp"

Base* generate(void)
{
    int r = std::rand() % 3;

    if (r == 0)
        return new A;
    else if (r == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type: C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try {
        dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        dynamic_cast<B&>(p);
        std::cout << "Type: B" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << "Type: C" << std::endl;
        return;
    } catch (std::exception &e) {}

    std::cout << "Unknown type" << std::endl;
}