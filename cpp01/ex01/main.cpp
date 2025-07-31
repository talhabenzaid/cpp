#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(2,"two_zombie");
    delete[] zombie;
}