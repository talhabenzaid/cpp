#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try
    {
        Bureaucrat beru("beru", 500);
        Bureaucrat beru2("beru2", 1);
        Bureaucrat beru3("beru3", 150);

        ShrubberyCreationForm shrubbery("shrubbery");
        RobotomyRequestForm robotomy("robotomy");
        PresidentialPardonForm pardon("pardon");

        beru.signForm(shrubbery);
        beru3.signForm(robotomy);
        beru2.signForm(robotomy);
        beru2.signForm(pardon);

        std::cout << "----------------------------------------------" <<std::endl;

        beru.executeForm(shrubbery);
        std::cout << "----------------------------------------------" <<std::endl;

        beru3.executeForm(shrubbery);
        std::cout << "----------------------------------------------" <<std::endl;

        beru2.executeForm(robotomy);
        std::cout << "----------------------------------------------" <<std::endl;

        beru.executeForm(pardon);
        std::cout << "----------------------------------------------" <<std::endl;

        beru2.executeForm(pardon);

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
