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
        Form form("cont",false,100,100);
        std::cout << form;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat beru("beru", 100);
        Form form("cont2",false,100,100);
        form.beSigned(beru);
        beru.signForm(form);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
