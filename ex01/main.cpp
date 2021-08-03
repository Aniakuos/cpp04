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
    
    //delete j;//should not create a leak
    //delete i;
}