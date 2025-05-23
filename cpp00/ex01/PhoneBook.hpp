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
    public:
        void set_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
};

class PhoneBook
{
    private:
        Contact contact[8];
        int index = 0;
    public:
        void add_contact(Contact add_new_countact);
};


#endif