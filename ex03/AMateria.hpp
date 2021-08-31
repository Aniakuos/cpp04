#ifndef AMATERIA_H
# define AMATERIA_H


#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string Type;
    public:
        AMateria( void );
        AMateria( AMateria const &src);
        AMateria(std::string const & type);
        AMateria & operator=(AMateria const & rhs);
        virtual ~AMateria( void);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif