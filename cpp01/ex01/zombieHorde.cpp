#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
    {
        std::cout << "the number should be bigger than 0\n";
        return(NULL);
    }
    Zombie *Horde = new Zombie[N];
    for (int i = 0;i < N;i++)
    {
        Horde[i].set_name(name);
    }
    return(Horde);
}
