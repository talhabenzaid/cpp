    #ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage ;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &other);
        ClapTrap &operator=(ClapTrap &other);
        virtual ~ClapTrap();
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif