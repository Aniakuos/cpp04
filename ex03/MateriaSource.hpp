#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* src[4];

    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const &src );
        MateriaSource & operator=( MateriaSource const & rhs);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif