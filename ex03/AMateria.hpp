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
        AMateria & operator=(AMateria const & rhs);
        virtual ~AMateria( void);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( Ice const &src);
        Ice & operator=(Ice const & rhs);
        ~Ice( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( Cure const &src);
        Cure & operator=(Cure const & rhs);
        ~Cure( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif