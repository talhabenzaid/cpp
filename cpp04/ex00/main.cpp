#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    std::cout << "Cat makes sound: ";
    cat->makeSound();
    std::cout << "Dog makes sound: ";
    dog->makeSound();
    std::cout << "Animal makes sound: ";
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;


    

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

    wrongCat->makeSound();
    std::cout << "WrongAnimal makes sound: ";
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
