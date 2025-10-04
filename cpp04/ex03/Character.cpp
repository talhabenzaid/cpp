#include "Character.hpp"
#include <iostream>

Character::Character() : name("Default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(const std::string& name) : name(name)
{
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(const Character& other) : name(other.name)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; ++i) 
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; ++i)
        {
            delete inventory[i];
            inventory[i] = nullptr;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout << "AMateria destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
        inventory[i] = nullptr;
    }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; ++i)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;

    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;

    inventory[idx]->use(target);
}
