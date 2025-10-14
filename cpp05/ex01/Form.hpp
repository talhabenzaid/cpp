#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_sign;
        const int grade_sign;
        const int grade_execute;
    public:
        Form();
        Form(const std::string name,bool is_sign,const int grade_sign,const int grade_execute);
        Form(Form &other);
        Form &operator=(Form &other);
        ~Form();

        const std::string& getName();
        bool getIs_sign();
        int getGrade_sign();
        int getGrade_execute();

        void beSigned(Bureaucrat& bureaucrat);

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
std::ostream& operator<<(std::ostream& os,Form &form);

#endif