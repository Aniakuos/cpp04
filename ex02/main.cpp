#include "Animal.hpp"
#include "brain.hpp"

int main()
{
    // Cat cat;
    // cat.setIdea(0, "Cat idea");
    // std::cout << cat.getIdea(0) << "\n";
    // Cat cat2 = cat;
    // std::cout << cat2.getIdea(0) << "\n";

    Dog basic;
    basic.setIdea(1, "Dog idea");
    std::cout << basic.getIdea(1) << "\n";
    Dog tmp = basic;
    std::cout << tmp.getIdea(1) << "\n";

    //const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    //meta->makeSound();

    //delete meta;
    // delete j;
    // delete i;
}