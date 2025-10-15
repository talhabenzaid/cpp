#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        const int grade_sign;
        const int grade_execute;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target, const int grade_sign,const int grade_execute);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};

#endif