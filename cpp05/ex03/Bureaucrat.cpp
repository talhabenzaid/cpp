#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
    grade = 150;
}
Bureaucrat::Bureaucrat(std::string n,int grade): name(n)
{
    if (grade < 1) 
        throw GradeTooHighException();
    if (grade > 150) 
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name)
{
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment()
{
    if (grade < 1) 
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement()
{
    if (grade > 150) 
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& os,Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() <<" , bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::signForm(AForm &form)
{

    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << std::endl;
    } catch (std::exception& e)
    {
        std::cout << getName() << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << getName() << " couldn’t execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}