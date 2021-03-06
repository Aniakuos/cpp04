#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default constructor of Animal called\n";
}

Animal::~Animal()
{
    std:: cout << "Destructors of Animal called\n";
}

Animal::Animal(Animal const &src)
{
    std::cout << "Copy constructor of Animal called" << std::endl;
    *this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "Assignation operator of Animal called" << std::endl;
    if ( this != &rhs )
        this->type = rhs.getType();
    return (*this);
}

std::string Animal::getType( void ) const
{
    return ( this->type );
}

void Animal::set_Type( std::string const t )
{
    this->type = t;
}

void Animal::makeSound() const
{
    std::cout << "Sound of Animal\n";
}

Cat::Cat()
{
    std::cout << "Default constructor of Cat called\n";
    this->set_Type("Cat");
    this->obj = new brain();
}

Cat::~Cat()
{
    std:: cout << "Destructors of Cat called\n";
    delete obj;
}

Cat::Cat( Cat const &src )
{
    std::cout << "Copy constructor of Cat called" << std::endl;
    *this = src;
}

void Cat::setIdea( int i, std::string idea )
{
    this->obj->setIdea(i, idea);
}

std::string Cat::getIdea( int i ) const
{
    return ( this->obj->getIdea(i) );
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Assignation operator of Cat called" << std::endl;
    if ( this != &rhs )
    {
        this->type = rhs.getType();
        this->obj = new brain();
        for (int i = 0; i < 100; i++)
        {
            this->obj->setIdea(i, rhs.obj->getIdea(i));
        }
    }
    
    return (*this);
}


void Cat::makeSound() const
{
    std::cout << "Muuuaaaw\n";
}

Dog::Dog()
{
    std::cout << "Default constructor of Dog called\n";
    this->set_Type("Dog");
    this->obj = new brain();
}

std::string Dog::getIdea( int i ) const
{
    return ( this->obj->getIdea( i ));
}

void Dog::setIdea( int i, std::string idea )
{
    this->obj->setIdea( i, idea );
}

Dog::~Dog()
{
    std:: cout << "Destructors of Dog called\n";
    delete obj;
}

Dog::Dog(Dog const &src)
{
    std::cout << "Copy constructor of Dog called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Assignation operator of Dog called" << std::endl;
    if ( this != &rhs )
    {
        this->type = rhs.getType();
        this->obj = new brain();
        for (int i = 0; i < 100; i++ )
            this->obj->setIdea( i, rhs.getIdea(i));
    }
    
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Haaaaaw\n";
}