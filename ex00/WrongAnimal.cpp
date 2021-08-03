#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default constructor of WrongAnimal called\n";
}

WrongAnimal::~WrongAnimal()
{
    std:: cout << "Destructors of WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Copy constructor of WrongAnimal called" << std::endl;
    *this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    std::cout << "Assignation operator of WrongAnimal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return ( this->type );
}

void WrongAnimal::set_Type( std::string const t )
{
    this->type = t;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Baaaa3333\n";
}

WrongCat::WrongCat()
{
    std::cout << "Default constructor of WrongCat called\n";
    this->set_Type("WrongCat");
}

WrongCat::~WrongCat()
{
    std:: cout << "Destructors of WrongCat called\n";
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "Copy constructor of WrongCat called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    std::cout << "Assignation operator of WrongCat called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "muuuuuuuuch\n";
}
