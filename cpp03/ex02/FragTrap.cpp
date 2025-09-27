#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called\n";
    name = "";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Parameter constructor called\n";
    this->name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called\n";
}


FragTrap& FragTrap::operator=(FragTrap &other)
{
    std::cout << "FragTrap Copy assignment operator called \n";
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five!\n";
}