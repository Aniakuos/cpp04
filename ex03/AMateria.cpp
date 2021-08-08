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

AMateria::AMateria(std::string const & type) : Type(type)
{
    std::cout << "Parameter constructor of AMateria called\n";
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    std::cout << "Assignation operator of AMateria called" << std::endl;
    this->Type = rhs.getType();
    return (*this);
}

std::string const & AMateria::getType() const
{
    return ( this->Type );
}

AMateria* AMateria::clone() const
{
    return( new Type);
}

AMateria::~AMateria( void )
{
    std::cout << "Destructor of AMateria called\n";
}

Ice::Ice( void ) : AMateria("ice")
{
    std::cout << "Default constructor of Ice called\n";
}

Ice::Ice( Ice const &src)
{
    std::cout << "Copy constructor of Ice called\n" << std::endl;
    *this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
    std::cout << "Assignation operator of Ice called" << std::endl;
    this->Type = rhs.getType();
    return (*this);
}

Ice::~Ice( void )
{
    std::cout << "Desctructor of Ice Called\n";
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "Default constructor of Cure called\n";
}

Cure::Cure( Cure const &src)
{
    std::cout << "Copy constructor of Cure called\n" << std::endl;
    *this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
    std::cout << "Assignation operator of Cure called" << std::endl;
    this->Type = rhs.getType();
    return (*this);
}

Cure::~Cure( void )
{
    std::cout << "Desctructor of Cure Called\n";
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void AMateria::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << this->getName()
}