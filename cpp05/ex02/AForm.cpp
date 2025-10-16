#include "AForm.hpp"
#include <iostream>

AForm::AForm()
    : name("DefaultForm"), is_sign(false), grade_sign(0), grade_execute(0)
{
}

AForm::AForm(const std::string& name, bool is_sign, int grade_sign, int grade_execute)
    : name(name), is_sign(is_sign), grade_sign(grade_sign), grade_execute(grade_execute)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name), is_sign(other.is_sign), grade_sign(other.grade_sign), grade_execute(other.grade_execute)
{
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->is_sign = other.is_sign;
    }
    return *this;
}

AForm::~AForm()
{
}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIs_sign() const
{
    return is_sign;
}

int AForm::getGrade_sign() const
{
    return grade_sign;
}

int AForm::getGrade_execute() const
{
    return grade_execute;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > grade_sign)
        throw GradeTooLowException();
    is_sign = true;
}

void AForm::execute(Bureaucrat const& executor) const
{
    if (!is_sign)
        throw NotSign();
    if (executor.getGrade() > grade_execute)
        throw GradeTooLowException();
    executeAction();
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    if (form.getIs_sign())
        os << form.getName() << " is signed. Required grade to sign: "
           << form.getGrade_sign() << ", grade to execute: " << form.getGrade_execute();
    else
        os << form.getName() << " is not signed. Required grade to sign: "
           << form.getGrade_sign() << ", grade to execute: " << form.getGrade_execute();
    return os;
}
