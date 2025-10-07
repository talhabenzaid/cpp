#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource assignment operator called" << std::endl;
    if (this != &other)
    {
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
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m->clone();
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return NULL;
}
