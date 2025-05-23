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