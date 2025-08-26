#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(2,"Two_zombie");
    delete[] zombie;
}