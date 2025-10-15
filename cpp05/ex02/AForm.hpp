#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_sign;
        const int grade_sign;
        const int grade_execute;
    public:
        AForm();
        AForm(const std::string name,bool is_sign,const int grade_sign,const int grade_execute);
        AForm(AForm &other);
        AForm &operator=(AForm &other);
        ~AForm();

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

        virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& os,AForm &form);

#endif