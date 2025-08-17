#include "Zombie.hpp"

void f()
{
    system("leaks  Zombie");
}

int main()
{
    // atexit(f);
    Zombie *zombie = zombieHorde(001,"Two_zombie");
    delete[] zombie;
}