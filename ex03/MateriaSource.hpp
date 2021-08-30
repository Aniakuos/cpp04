#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* src[4];

    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const &src );
        MateriaSource & operator=( MateriaSource const & rhs);
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif