#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
   
}

Cure::Cure( Cure const &src)
{
    
    *this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
    
    this->Type = rhs.getType();
    return (*this);
}

Cure::~Cure( void )
{
    
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}