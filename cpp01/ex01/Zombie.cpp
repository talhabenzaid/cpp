#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "creat\n";
}

Zombie::~Zombie()
{
    std::cout << "Destroyed\n";
}
void Zombie::set_name(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
