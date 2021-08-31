#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    meta->makeSound();
    while (1);


    delete meta;
    delete j;
    delete i;

}