#include "Character.hpp"

Character::Character( void )
{
    std::cout << "Defaulr constructor of Character called \n";
}

Character::Character( Character const &src)
{
    std::cout << "Copy constructor of Character called\n" << std::endl;
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
    std::cout << "Assignation operator of Character called" << std::endl;
    this->Name = rhs.getName();
    return (*this);
}

Character::~Character( void )
{
    std::cout << "Destructor of Character called \n";
}

std::string const & getName() const
{
    return (this->Name);
}