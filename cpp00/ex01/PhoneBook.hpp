#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void add_contact(Contact add_new_countact);
        void list_contact();
        void display_contact(int i);
        int check_index(int i);
};

std::string format(std::string str);

#endif
