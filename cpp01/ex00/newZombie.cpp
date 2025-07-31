#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new(std::nothrow) Zombie(name);
    if(!zombie)
    {
        std::cout << "cant allocted\n";
        return(NULL);
    }
    return(zombie);

}
