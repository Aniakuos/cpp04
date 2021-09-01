#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    //std::cout << "Default constructor of MateriaSource called \n";
    for( int i = 0; i < 4; i++ )
        this->src[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
    //std::cout << "Copy constructor of MateriaSource called\n" << std::endl;
    for( int i = 0; i < 4; i++ )
        this->src[i] = src.src[i];
}

MateriaSource & MateriaSource::operator=( MateriaSource const &rhs)
{
    //std::cout << "Assignation operator of MateriaSource called" << std::endl;
    if (this != &rhs )
    {
    //    for( int i = 0; i < 4; i++ )
    //     {
    //         if ( this->src[i] )
    //             delete this->src[i];
    //         //src[i] = NULL;
    //     }
        for (int i = 0; i < 4; i++ )
        {
            //if( rhs.src[i] )
                this->src[i] = rhs.src[i];
        }
    }
    
    return (*this);
}

MateriaSource::~MateriaSource()
{
    //std::cout << "Destructor of MateriaSource called \n";
    // for( int i = 0; i < 4; i++ )
    // {
    //     delete this->src[i];
    // }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if ( m != NULL )
    {
            //return;
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