#include "PhoneBook.hpp"

void Contact::set_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    First_name = first;
    Last_name = last;
    Nickname = nick;
    Phone_number = phone;
    Darkest_secret = secret;
}

void PhoneBook::add_contact(Contact add_new_countact)
{
        contact[index % 8] = add_new_countact;
        index++;
}

std::string format(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::list_contact()
{
    std::cout << "---------------------------------------------\n";
    std::cout << "| Index | First Name | Last Name | Nickname |\n";
    std::cout << "---------------------------------------------\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|   " << i + 1 << "   | ";
        std::cout << format(contact[i].getFirstName()) << " | ";
        std::cout << format(contact[i].getLastName()) << " | ";
        std::cout << format(contact[i].getNickname()) << " |\n";
    }
    std::cout << "---------------------------------------------\n";
} 

int main(void)
{
    PhoneBook phonebook;
    std::string cmd;
    while (1)
    {
        std::cout << "Enter your command (ADD, SEARCH or EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
            add(phonebook);
        else if (cmd == "SEARCH")
            search(phonebook);
        else if (cmd == "EXIT")
            exit_cmd();
        else
            std::cout << "Invalid command\n";
    }
}