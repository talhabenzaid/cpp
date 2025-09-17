#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    name = "";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parameter constructor called\n";
    this->name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
    std::cout << "Copy constructor called\n";
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
    std::cout << "Copy assignment operator called \n";
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " cant attack" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target <<", causing " <<
        Attack_damage <<" points of damage!" << std::endl;
    Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed.\n";
        return;
    }
    Hit_points -= amount;
    if (Hit_points < 0)
        Hit_points = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage, "
              << "current hit points " << Hit_points << "\n";
    if (Hit_points == 0)
        std::cout << "ClapTrap " << name << " has been destroyed!\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " cant repaired\n";
        return;
    }
    Hit_points += amount;
    Energy_points--;
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points, "
              << "current hit points " << Hit_points << "\n";
}

