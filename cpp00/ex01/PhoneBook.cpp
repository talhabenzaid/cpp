#include "PhoneBook.hpp"

void add()
{
    return;
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