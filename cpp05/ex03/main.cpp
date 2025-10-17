#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* form;

    std::string formName1 = "PresidentialPardonForm";
    std::string target1 = "target1";
    form = someRandomIntern.makeForm(formName1, target1);
    if (form)
    {
        std::cout << formName1 << std::endl;
        delete form;
    }



    std::cout << "--------------------------------------------------\n";
    std::string formName2 = "test";
    std::string target2 = "target2";
    form = someRandomIntern.makeForm(formName2, target2);
    if (form)
    {
        std::cout << formName2 << std::endl;
        delete form;
    }

    return 0;
}
