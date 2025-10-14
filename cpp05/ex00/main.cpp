#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try 
    {
        Bureaucrat bure1("bure1", 42);
        std::cout << bure1;
    } catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }


    try
    {
        Bureaucrat bure2("bure2", 0);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat bure3("bure3", 151);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat bure4("bure4", 2);
        std::cout << bure4;

        std::cout << "increment" << std::endl;
        bure4.increment();
        std::cout << bure4;

        std::cout << "increment" << std::endl;
        bure4.increment();
        std::cout <<"test" << std::endl;
    } catch (std::exception &e)
    {
        std::cerr << "Exception during increment: " << e.what() << std::endl;
    }

    return 0;
}
