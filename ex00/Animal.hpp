#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal( void );
        Animal(Animal const &);
        Animal& operator=(Animal const &);
        virtual ~Animal();
        std::string getType( void ) const;
        void set_Type( std::string const t);
        virtual void makeSound() const;
        
        
    protected:
        std::string type;

};

class Cat : public Animal
{
    public:
        Cat( void );
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        virtual ~Cat();
        virtual void makeSound() const;

};

class Dog : public Animal
{
    public:
        Dog( void );
        Dog(Dog const &);
        Dog& operator=(Dog const &);
        virtual ~Dog();
        virtual void makeSound() const;

};

#endif