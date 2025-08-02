#include "PhoneBook.hpp"

void Contact::set_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    First_name = first;
    Last_name = last;
    Nickname = nick;
    Phone_number = phone;
    Darkest_secret = secret;
}

std::string Contact::getFirstName()  
{
    return First_name;
}

std::string Contact::getLastName()  
{
    return Last_name;
}

std::string Contact::getNickname()  
{
    return Nickname;
}

std::string Contact::getPhonenumber()  
{
    return Phone_number;
}

std::string Contact::getDarkestsecret()  
{
    return Darkest_secret;
}
