#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    std::cout << "Default constructor of MateriaSource called \n";
    for( int i = 0; i < 4; i++ )
        src[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
    std::cout << "Copy constructor of MateriaSource called\n" << std::endl;
    *this = src;
}

MateriaSource & MateriaSource::operator=( MateriaSource const &rhs)
{
    std::cout << "Assignation operator of MateriaSource called" << std::endl;
    for( int i = 0; i < 4; i++ )
    {
        delete src[i];
        src[i] = NULL;
    }
    for (int i = 0; i < 4; i++ )
    {
        if( rhs.src[i] )
            src[i] = rhs.src[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor of MateriaSource called \n";
    for( int i = 0; i < 4; i++ )
    {
        delete src[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if ( m == NULL )
        return;
    for ( int i = 0; i < 4 ; i++ )
    {
        this->src[i] = m;
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