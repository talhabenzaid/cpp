#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact add_new_countact)
{
        contact[index % 8] = add_new_countact;
        index++;
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
}