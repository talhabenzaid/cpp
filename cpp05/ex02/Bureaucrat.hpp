#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib> 
#include <ctime>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name,int grade);
        Bureaucrat(Bureaucrat &other);
        Bureaucrat &operator=(Bureaucrat &other);
        ~Bureaucrat();

        const std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();

        void signForm(AForm &Form);

        class GradeTooHighException : public std::exception
        {
            public:
            const char* what() const throw( )
            {
                return "too high";
            }
        };
        class GradeTooLowException : public std::exception
        {
            public:
            const char* what() const throw()
            {
                return "too low";
            }
        };

        void executeForm(AForm const & form) const;

};
std::ostream& operator<<(std::ostream& os,Bureaucrat &bureaucrat);

#endif