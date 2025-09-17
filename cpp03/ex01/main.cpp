#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap clap("bot");
    clap.attack("target_1");
    clap.takeDamage(3);
    clap.beRepaired(2);
    clap.attack("target_2");

    ScavTrap scav("scav_bot");
    scav.attack("target_3");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
    return (0);
}
