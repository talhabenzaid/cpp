#include "ClapTrap.hpp"

int main()
{
    ClapTrap bot("bot");

    bot.attack("target");
    bot.takeDamage(5);
    bot.beRepaired(2);
    bot.attack("target");
    bot.takeDamage(20);
    bot.beRepaired(5);
    return (0);
}
