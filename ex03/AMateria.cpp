#include "AMateria.hpp"

AMateria::AMateria( void )
{
    
}

AMateria::AMateria( AMateria const &src)
{
    *this = src;
}

AMateria::AMateria(std::string const & type) : Type(type)
{
    
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    this->Type = rhs.getType();
    //(void) rhs;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return ( this->Type );
}

void AMateria::use(ICharacter& target)
{
    std::cout << "use  " << target.getName() << " for AMateria" << std::endl;
}

AMateria::~AMateria( void )
{

}

