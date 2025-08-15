#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Creat\n";
}

Zombie::~Zombie()
{
    std::cout << name << " Destroyed\n";
}
void Zombie::set_name(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
