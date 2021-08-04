#include "AMateria.hpp"

AMateria::AMateria( void )
{
    std::cout << "Defaulr constructor of AMateria called \n";
}

AMateria::AMateria( AMateria const &src)
{
    std::cout << "Copy constructor of AMateria called\n" << std::endl;
    *this = src;
}

AMateria::AMateria(std::string const & type) : Type
{
    std::cout << "Parameter constructor of AMateria called\n";
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    std::cout << "Assignation operator of AMateria called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

std::string const & getType() const
{
    return ( this->type );
}

void AMateria::setType( std::string const t )
{
    this->type = t;
}

AMateria::~AMateria( void )
{
    std:: cout << "Destructors of AMateria called\n";
}