#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    
}

Ice::Ice( Ice const &src)
{
    *this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
    this->Type = rhs.getType();
    return (*this);
}

Ice::~Ice( void )
{
    
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}