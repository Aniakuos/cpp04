#include "Character.hpp"

Character::Character( void )
{
    //std::cout << "Default constructor of Character called \n";
    for(int i = 0; i < 4; i++)
        this->inv[i] = NULL;
}

Character::Character( std::string const & name ):name(name)
{
    //std::cout << "Constructor of Character with name in param called \n";
    for(int i = 0; i < 4; i++)
        this->inv[i] = NULL;
}

Character::Character( Character const &src )//:name(src.name)
{
    //std::cout << "Copy constructor of Character called\n" << std::endl;
    // for(int i = 0; i < 4; i++)
    //     this->inv[i] = NULL;
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
    //std::cout << "Assignation operator of Character called" << std::endl;
    if (this != &rhs )
    {
        this->name = rhs.getName();
        for( int i = 0; i < 4; i++ )
        {
            if ( this->inv[i] )
                delete this->inv[i];
            //this->inv[i] = NULL;
        }
        for (int i = 0; i < 4; i++ )
        {
            if( rhs.inv[i] )
                this->inv[i] = rhs.inv[i];
        }
    }
    return (*this);
}

Character::~Character( void )
{
    //std::cout << "Destructor of Character called \n";
    for( int i = 0; i < 4; i++ )
    {
        delete this->inv[i];
    }
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if ( m != NULL )
        //return ;
    {
        for( int i = 0; i < 4; i++ )
        {
            if ( this->inv[i] == NULL )
                this->inv[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if( idx < 4 && idx >= 0 )
    {
        if( this->inv[idx] != NULL)
            this->inv[idx] = NULL;
        for ( int i = idx; i < 3; i++ )
        {
            if( this->inv[i + 1] == NULL)
                break;
            this->inv[i] = this->inv[i + 1];
            this->inv[i + 1] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if( idx < 4 && idx >= 0 && this->inv[idx] != NULL)
    {
        this->inv[idx]->use( target );
    }
}