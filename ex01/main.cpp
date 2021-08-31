#include "Animal.hpp"
#include "brain.hpp"

int main()
{
    //const Animal* j = new Dog();
    //const Animal* i = new Cat();
    
    const Animal *ani[4];
  
    for(int i=0; i<2; i++)
    {
        ani[i] = new Cat();
    }
    for(int i=2; i<4; i++)
    {
        ani[i] = new Dog();
    }
    for (int i = 0; i < 4; i++)
    {
        delete ani[i];
    }
    
    Cat cat;
    cat.setIdea(0, "test idea");
    std::cout << cat.getIdea(0) << "\n";
    Cat cat2(cat);
    std::cout << cat2.getIdea(0) << "\n";

    //delete j;//should not create a leak
    //delete i;
}