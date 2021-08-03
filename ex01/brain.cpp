#include "brain.hpp"

brain::brain( void )
{
    std::cout << "Default constructor of brain called\n";
}

brain::~brain( void )
{
    std::cout << "Destructors of brain called\n";
}

brain::brain(brain const &src)
{
    std::cout << "Copy constructor of brain called" << std::endl;
    *this = src;
}

brain & brain::operator=(brain const & )//rhs
{
    std::cout << "Assignation operator of brain called" << std::endl;
    //this->type = rhs.getType();
    return (*this);
}