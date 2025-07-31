#ifndef WEAPON_HPP
#define WEAPOM_HPP

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        std::string getType();
        void setType(std::string new_type);
}

#endif