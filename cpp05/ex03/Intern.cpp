#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &other)
{
    (void)other;
}

Intern& Intern::operator=(Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{

}

AForm* Intern::PardonForm(std::string &target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::RequestForm(std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::CreationForm(std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string &FormName,std::string &FormTarget)
{
    std::string funct[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm* (Intern::*pointer[])(std::string&) = {&Intern::PardonForm, &Intern::RequestForm, &Intern::CreationForm};
    for (int i = 0; i < 4; i++)
    {
        if (FormName == funct[i])
        {
            return (this->*pointer[i])(FormTarget);
        }
    }
    std::cerr << "Not found" << std::endl;
    return NULL;
}
