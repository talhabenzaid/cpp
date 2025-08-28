#include "Zombie.hpp"

void f()
{
    system("leaks  Zombie");
}

int main()
{
    atexit(f);
    Zombie* Zombie1 = newZombie("Heap");
    Zombie1->announce();
    delete Zombie1;

    randomChump("Stack");
    return (0);
}
