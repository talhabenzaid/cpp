#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) 
    : name(name), weapon(weapon) {}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getName() << "\n";
}