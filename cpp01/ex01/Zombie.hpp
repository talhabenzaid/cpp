#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void ) {std::cout << name << ": BraiiiiiiinnnzzzZ...\n";}
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif