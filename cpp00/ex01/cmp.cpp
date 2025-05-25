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

std::string is_valid(std::string ask)
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
    return(str);
}

void add(PhoneBook &phonebook)
{
    Contact new_contact;
    std::string first = is_valid("First name: ");
    std::string last = is_valid("Last name: ");
    std::string nick = is_valid("Nickname: ");
    std::string phone = is_valid("Phone number: ");
    std::string secret = is_valid("Darkest secret: ");
    new_contact.set_contact(first, last, nick, phone, secret);
    phonebook.add_contact(new_contact);
}

void search(PhoneBook &phonebook)
{
    phonebook.list_contact();
    return;
}

void exit_cmd()
{
    std::cout << "Exit\n";
    std::exit(0);
}
