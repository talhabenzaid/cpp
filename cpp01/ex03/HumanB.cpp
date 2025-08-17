#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
    : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon; 
}

void HumanB::attack()
{
    if (weapon != NULL)
        std::cout << name << " attacks with " << weapon->getType() << std::endl;
    else
        std::cout << name << " no weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << name << " Destroyed\n";
}
