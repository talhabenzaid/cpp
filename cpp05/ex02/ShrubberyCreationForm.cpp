#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : target("Default"), grade_sign(145), grade_execute(137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target, const int grade_sign,const int grade_execute)
: target(target + "_shrubbery"), grade_sign(grade_sign), grade_execute(grade_execute)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : grade_sign(other.grade_sign), grade_execute(other.grade_execute)
{
    this->target = other.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    std::cout << " ^ \n^^^\n |\n";
}
