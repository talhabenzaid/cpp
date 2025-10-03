#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    Dog dog1;
    Dog dog2 = dog1;
    Cat cat1;
    Cat cat2;
    cat2 = cat1;

    for (int i = 0; i < size; i++)
        delete animals[i];

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    return 0;
}
