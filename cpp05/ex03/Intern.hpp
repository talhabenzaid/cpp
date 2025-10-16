#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern &other);
        Intern &operator=(Intern &other);
        ~Intern();

        AForm* makeForm(std::string &FormName,std::string &FormTarget);
        AForm* PardonForm(std::string &target);
        AForm* RequestForm(std::string &target);
        AForm* CreationForm(std::string &target);

};

#endif