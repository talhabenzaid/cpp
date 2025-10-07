#include "Character.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    Character test;

    AMateria *test1 = new Cure;
    test.equip(test1);
    test.equip(test1);
    test.equip(new Cure);
    test.equip(new Cure);
    test.equip(new Cure);

    test.unequip(0);
    test.unequip(1);
    test.unequip(2);
    test.unequip(3);

    test.equip(new Cure);
    test.equip(new Cure);
    test.equip(new Cure);
    test.equip(new Cure);

    test.unequip(0);
    test.unequip(1);
    test.unequip(2);
    test.unequip(3);
    test.unequip(4);

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    // return 0;

}