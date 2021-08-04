#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <string>

class AMateria
{
    protected:
        std::string Type;
    public:
        AMateria( void );
        AMateria( AMateria const &src);
        AMateria(std::string const & type);
        void setType( std::string t);
        AMateria & operator=(AMateria const & rhs);
        virtual ~AMateria( void);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif