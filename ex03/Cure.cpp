#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    //std::cout << "Default constructor of Cure called\n";
}

Cure::Cure( Cure const &src)
{
    //std::cout << "Copy constructor of Cure called\n" << std::endl;
    *this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
    //std::cout << "Assignation operator of Cure called" << std::endl;
    this->Type = rhs.getType();
    return (*this);
}

Cure::~Cure( void )
{
    //std::cout << "Desctructor of Cure Called\n";
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}