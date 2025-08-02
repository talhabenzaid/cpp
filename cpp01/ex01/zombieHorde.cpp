#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return(NULL);
    Zombie *Horde = new(std::nothrow)Zombie[N];
    if(!Horde)
    {
        std::cout << "cant allocted\n";
        return(NULL);
    }
    for (int i = 0;i < N;i++)
    {
        Horde[i].set_name(name);
        Horde[i].announce();
    }
    return(Horde);
}
