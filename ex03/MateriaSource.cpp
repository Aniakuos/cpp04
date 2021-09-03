#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for( int i = 0; i < 4; i++ )
        this->src[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
    for( int i = 0; i < 4; i++ )
        this->src[i] = src.src[i];
}

MateriaSource & MateriaSource::operator=( MateriaSource const &rhs)
{
    if (this != &rhs )
    {
        for (int i = 0; i < 4; i++ )
        {
            this->src[i] = rhs.src[i];
        }
    }
    
    return (*this);
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* m)
{
    if ( m != NULL )
    {
        for ( int i = 0; i < 4 ; i++ )
        {
            if ( this->src[i] == NULL )
            {
                this->src[i] = m;
                break;
            }
        }
    }
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( this->src[i]->getType() == type )
            return ( this->src[i]->clone() );
    }
    return (0);
}