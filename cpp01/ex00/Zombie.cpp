#include "Zombie.hpp"

Zombie::Zombie(std::string name) 
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Destroyed\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}