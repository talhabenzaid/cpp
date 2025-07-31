#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    (void)name;
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
        Horde[i].Zombie(name);
        Horde[i].announce();
    }
    return(Horde);
}
