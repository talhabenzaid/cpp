#include "Form.hpp"
#include <iostream>

Form::Form()
    : name("DefaultForm"), is_sign(false), grade_sign(0), grade_execute(0)
{

}
Form::Form(const std::string name,bool is_sign,const int grade_sign,const int grade_execute): name(name),
     is_sign(is_sign), grade_sign(grade_sign), grade_execute(grade_execute)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw GradeTooLowException();
}

Form::Form(Form &other): name(other.name), grade_sign(other.grade_sign), 
    grade_execute(other.grade_execute)
{
    this->is_sign = other.is_sign;
}

Form &Form::operator=(Form &other)
{
    if (this != &other)
    {
        this->is_sign = other.is_sign;
    }
    return *this;
}

Form::~Form()
{

}

const std::string &Form::getName()
{
    return name;
}

bool Form::getIs_sign()
{
    return is_sign;
}

int Form::getGrade_sign()
{
    return grade_sign;
}

int Form::getGrade_execute()
{
    return grade_execute;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{

    if (bureaucrat.getGrade() > grade_sign)
        throw GradeTooLowException();
    is_sign = true;
 }

std::ostream& operator<<(std::ostream& os,Form &form)
{
    if(form.getIs_sign() == true)
        os << form.getName() << " is signe and his grade signe" << 
            form.getGrade_sign() << " and his grade execute " << form.getGrade_execute() << std::endl;
    else
        os << form.getName() << " is not signe and his grade signe" << 
            form.getGrade_sign() << " and his grade execute " << form.getGrade_execute() << std::endl;
    return os;
}
