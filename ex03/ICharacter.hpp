#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <iostrem>
#include <string>

class ICharacter
{
    protected:
        std::string Name;
    public:
        ICharacter( void );
        ICharacter( ICharacter const &src);
        ICharacter & operator=(ICharacter const & rhs);
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif