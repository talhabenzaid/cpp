#include "Character.hpp"
#include <iostream>

Character::Character() : name("Default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        delet[i] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        delet[i] = NULL;
}

Character::Character(const Character& other) : name(other.name)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++) 
    {
        if (other.delet[i])
            delet[i] = other.delet[i]->clone();
        else
            delet[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            delete delet[i];
            delet[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.delet[i])
                delet[i] = other.delet[i]->clone();
            else
                delet[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout << "AMateria destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        delete delet[i];
        delet[i] = NULL;
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
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == m)
            return;
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
    delete m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;

    if (delet[idx]) 
    {
        delete delet[idx];
        delet[idx] = inventory[idx];
    }
    else
        delet[idx] = inventory[idx];
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    inventory[idx]->use(target);
}
