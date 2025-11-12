#include "Alpha.hpp"
int main()
{
    std::srand(time(0));

    Base* base = generate();
    // Base *wrong = NULL;

    std::cout << "--- Identify using pointer ---" << std::endl;
    identify(base);
    // identify(wrong);

    std::cout << "--- Identify using reference ---" << std::endl;
    identify(*base);
    // identify(*wrong);

    delete base;
}