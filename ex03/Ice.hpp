#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( Ice const &src);
        Ice & operator=(Ice const & rhs);
        ~Ice( void );
        AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif

