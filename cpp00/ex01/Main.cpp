#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string format(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

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
        if(std::cin.eof())
        {
            std::cout << std::endl;
            std::exit(0);
        }
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
    std::string i;
    phonebook.list_contact();
    std::cout <<  "index : ";
    std::getline(std::cin ,i);
    for(int j = 0;i[j];j++)
    {
        if(!isprint(i[j]) || (i[j] < '0' || i[j] > '9'))
        {
            std::cout << "invalide index\n";
            return;
        }
    }
    if(i.empty())
        std::cout << "invalide index\n";
    else if (phonebook.check_index(std::stoi(i)) == 1)
        std::cout << "invalid or empty index\n";
    else
        phonebook.display_contact(stoi(i));
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
        if(std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
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