#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

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
        std::string getFirstName()  { return First_name ;}
        std::string getLastName()  { return Last_name ;}
        std::string getNickname()  { return Nickname ;}
        std::string getPhonenumber()  { return Phone_number ;}
        std::string getDarkestsecret()  { return Darkest_secret ;}

};

#endif