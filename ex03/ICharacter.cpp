#include "Character.hpp"

ICharacter::ICharacter( void )
{
    std::cout << "Defaulr constructor of ICharacter called \n";
}

ICharacter::ICharacter( ICharacter const &src)
{
    std::cout << "Copy constructor of ICharacter called\n" << std::endl;
    *this = src;
}

ICharacter & ICharacter::operator=(ICharacter const & rhs)
{
    std::cout << "Assignation operator of ICharacter called" << std::endl;
    this->Name = rhs.getName();
    return (*this);
}

ICharacter::~ICharacter( void )
{
    std::cout << "Destructor of ICharacter called \n";
}

std::string const & getName() const
{
    return (this->Name);
}