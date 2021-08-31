#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    //std::cout << "Default constructor of Ice called\n";
}

Ice::Ice( Ice const &src)
{
    //std::cout << "Copy constructor of Ice called\n" << std::endl;
    *this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
    //std::cout << "Assignation operator of Ice called" << std::endl;
    this->Type = rhs.getType();
    return (*this);
}

Ice::~Ice( void )
{
    //std::cout << "Desctructor of Ice Called\n";
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}