#include "AMateria.hpp"

AMateria::AMateria( void )
{
    std::cout << "Default constructor of AMateria called \n";
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

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
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

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}