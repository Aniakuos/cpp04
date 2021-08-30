#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
private:
    /* data */
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &);
    WrongAnimal& operator=(WrongAnimal const &);
    void makeSound() const;
    std::string getType( void ) const;
    void set_Type( std::string const t);
    ~WrongAnimal();
protected:
    std::string type;

};

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat const &);
    WrongCat& operator=(WrongCat const &);
    void makeSound() const;
    ~WrongCat();

};

#endif