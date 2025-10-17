#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat beru("beru", 0);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Form form("cont" ,100,100);
        std::cout << form;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat beru("beru", 100);
        Form form("cont2" ,100,100);
        beru.signForm(form);
        form.beSigned(beru);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
