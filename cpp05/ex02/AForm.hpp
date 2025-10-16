#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

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
    AForm(const std::string& name, bool is_sign, int grade_sign, int grade_execute);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    const std::string& getName() const;
    bool getIs_sign() const;
    int getGrade_sign() const;
    int getGrade_execute() const;

    void beSigned(Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Grade too high";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Grade too low";
        }
    };

    class NotSign : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Form is not signed";
        }
    };

    void execute(Bureaucrat const& executor) const;
    virtual void executeAction() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
