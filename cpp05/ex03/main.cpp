#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    AForm* form;
    try {
        Intern someRandomIntern;
    
        std::string formName1 = "PresidentialPardonForm";
        std::string target1 = "target1";
        form = someRandomIntern.makeForm(formName1, target1);
        if (form)
        {
            Bureaucrat test("zakaria", 1);
            test.signForm(*form);
            form->execute(test);
            for (int i = 0; i < 30; i++)
                test.increment();
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
    } catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        if (form)
            delete form;
    }

    return 0;
}
