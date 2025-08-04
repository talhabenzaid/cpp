#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
    : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon; 
}

void HumanB::attack()
{
    if (weapon != nullptr)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " no weapon" << std::endl;
    }
}
