#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria* inv[4];
        
    public:
        Character( void );
        Character( std::string const & name );
        Character( Character const &src);
        Character & operator=(Character const & rhs);
        ~Character( void );// {}
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif