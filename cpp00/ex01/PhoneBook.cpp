#include "PhoneBook.hpp"

bool string_printable(std::string str)
{
    if (str.empty())
        return (false);
    int i = 0;
    while(str[i])
    {
        if(!isprint(str[i]))
            return(false);
        i++;
    }
    return(true);
}

void is_valid(std::string ask)
{
    std::string str;
    while(1)
    {
        std::cout << ask;
        std::getline(std::cin, str);
        if(string_printable(str))
            break;
        else
            std::cout << "Invalid\n";
    }
}

void add()
{
    is_valid("First name: ");
    is_valid("Last name: ");
    is_valid("Nickname: ");
    is_valid("Phone number: ");
    is_valid("Darkest secret: ");
}

void search()
{
    return;
}

void exit_cmd()
{
    std::cout << "Exit\n";
    std::exit(0);
}

int main(void)
{
    std::string cmd;
   while (1)
    {
        std::cout << "Enter your command (ADD, SEARCH or EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
            add();
        else if (cmd == "SEARCH")
            search();
        else if (cmd == "EXIT")
            exit_cmd();
        else
            std::cout << "Invalid command\n";
    }
}