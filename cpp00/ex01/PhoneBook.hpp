#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstring>

class Contact
{
    private:
        std::string First_name;
        std::string Last_name;
        std::string Nickname;
        std::string Phone_number;
        std::string Darkest_secret;
};

class PhoneBook
{
    private:
        Contact countact[8];
};


#endif