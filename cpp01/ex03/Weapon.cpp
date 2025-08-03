#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getName() const 
{
    return type;
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}

