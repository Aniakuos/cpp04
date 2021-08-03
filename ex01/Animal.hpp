#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>
#include "brain.hpp"

class Animal
{
    private:
        /* data */
    public:
        Animal();
        Animal(Animal const &);
        Animal& operator=(Animal const &);
        virtual void makeSound() const;
        std::string getType( void ) const;
        void set_Type( std::string const t);
        virtual ~Animal();
    protected:
        std::string type;

};

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        virtual void makeSound() const;
        virtual ~Cat();
    private:
        brain *obj;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &);
        Dog& operator=(Dog const &);
        virtual void makeSound() const;
        virtual ~Dog();
    private:
        brain *obj;
};

#endif