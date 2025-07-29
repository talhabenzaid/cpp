#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact add_new_countact)
{
    static int index = 0;
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

int PhoneBook::check_index(int i)
{
    if (i >= 1 && i >= 8)
    {
        return(1);
    }
    else  if (contact[i - 1].getFirstName().empty())
        return(1);
    return(0);
}

void PhoneBook::display_contact(int i)
{
    std::cout << "FirstName : " << contact[i - 1].getFirstName() << "\n";
    std::cout << "Last_Name : " << contact[i - 1].getLastName() << "\n";
    std::cout << "Nickname : " << contact[i - 1].getNickname() << "\n";
    std::cout << "Phone_number : " << contact[i - 1].getPhonenumber() << "\n";
    std::cout << "Darkest_secret : " << contact[i - 1].getDarkestsecret() << "\n";

}