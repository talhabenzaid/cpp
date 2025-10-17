#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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

        const std::string getName();
        int getGrade();
        void increment();
        void decrement();

        class GradeTooHighException : public std::exception
        {
            public:
            const char* what() const throw()
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

};
std::ostream& operator<<(std::ostream& os,Bureaucrat &bureaucrat);

#endif