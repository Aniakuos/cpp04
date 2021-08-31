#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( Cure const &src);
        Cure & operator=(Cure const & rhs);
        ~Cure( void );
        AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif