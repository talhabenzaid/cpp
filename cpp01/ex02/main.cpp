#include <string>
#include <iostream>

int main ()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stdstringPTR =  &string;
    std::string &stringREF = string;

    std::cout << &string << "\n";
    std::cout << stdstringPTR << "\n";
    std::cout << &stringREF << "\n";

    std::cout << string << "\n";
    std::cout << *stdstringPTR << "\n";
    std::cout << stringREF << "\n";
}