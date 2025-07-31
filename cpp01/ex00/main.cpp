#include "Zombie.hpp"


int main()
{
    Zombie* Zombie1 = newZombie("Heap");
    Zombie1->announce();
    delete Zombie1;

    randomChump("Stack");

    return (0);
}
