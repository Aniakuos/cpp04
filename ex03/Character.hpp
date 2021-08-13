#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostrem>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character
{
    protected:
        std::string Name;
        
    public:
        Character( void );
        Character( Character const &src);
        Character & operator=(Character const & rhs);
        virtual ~Character() {}
        std::string const & getName() const = 0;
        void equip(AMateria* m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, Character& target) = 0;
};

#endif