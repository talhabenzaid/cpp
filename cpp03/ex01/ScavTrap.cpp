#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called\n";
    name = "";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Parameter constructor called\n";
    this->name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called\n";
}


ScavTrap& ScavTrap::operator=(ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignment operator called \n";
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}
void ScavTrap::attack(const std::string& target)
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ScavTrap "<< name <<" cant attack" << std::endl;
        return;
    }
     std::cout << "ScavTrap " << name << " attacks " << target <<", causing " <<
        Attack_damage <<" points of damage!" << std::endl;
    Energy_points--;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name 
        << " has entered Gate Keeper mode." << std::endl;
}