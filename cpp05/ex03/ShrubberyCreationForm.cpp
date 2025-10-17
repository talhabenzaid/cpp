#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("Default")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: AForm("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)  : AForm(other), target(other.target)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}


void ShrubberyCreationForm::executeAction() const
{
    std::ofstream outfile((target + "_shrubbery").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not open file\n";
        return;
    }

    outfile <<
        "       ###\n"
        "      #####\n"
        "    #########\n"
        "   #####|#####\n"
        "    ####|####\n"
        "       }|{  \n"
        "       }|{\n";

}
