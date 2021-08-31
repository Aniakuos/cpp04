#include "AMateria.hpp"

AMateria::AMateria( void )
{
    //std::cout << "Default constructor of AMateria called \n";
}

AMateria::AMateria( AMateria const &src)
{
    //std::cout << "Copy constructor of AMateria called\n" << std::endl;
    *this = src;
}

AMateria::AMateria(std::string const & type) : Type(type)
{
    //std::cout << "Parameter constructor of AMateria called\n";
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    //std::cout << "Assignation operator of AMateria called" << std::endl;
    //this->Type = rhs.getType();
    (void) rhs;
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
    //std::cout << "Destructor of AMateria called\n";
}

