#include "Span.hpp"
#include <ctime>

int main()
{
    try
    {
        const unsigned int size = 10000;
        Span sp(size);

        std::srand(static_cast<unsigned int>(std::time(NULL)));
        for (unsigned int i = 0; i < size; i++)
        {
            sp.addNumber(std::rand());
        }

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << sp.longestSpan() << std::endl;

        try
        {
            sp.addNumber(42);
        }
        catch (const std::exception& e)
        {
            std::cout << "Expected exception when adding too many numbers: "
                      << e.what() << std::endl;
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}