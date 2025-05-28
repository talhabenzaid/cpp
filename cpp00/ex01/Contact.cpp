#include "PhoneBook.hpp"

void Contact::set_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    First_name = first;
    Last_name = last;
    Nickname = nick;
    Phone_number = phone;
    Darkest_secret = secret;
}