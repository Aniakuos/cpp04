#include "Character.hpp"

Character::Character( void )
{
    for(int i = 0; i < 4; i++)
        this->inv[i] = NULL;
}

Character::Character( std::string const & name ):name(name)
{
    for(int i = 0; i < 4; i++)
        this->inv[i] = NULL;
}

Character::Character( Character const &src )
{
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs )
    {
        this->name = rhs.getName();
        for (int i = 0; i < 4; i++ )
        {
            if( rhs.inv[i] )
                this->inv[i] = rhs.inv[i];
            else
                this->inv[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character( void )
{
    
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if ( m != NULL )
    {
        for( int i = 0; i < 4; i++ )
        {
            if ( this->inv[i] == NULL )
            {
                this->inv[i] = m;
                break;
           }
        }
    }
}

void Character::unequip(int idx)
{
    if( idx < 4 && idx >= 0 )
    {
        if( this->inv[idx] != NULL)
            this->inv[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if( idx < 4 && idx >= 0 && this->inv[idx] != NULL)
    {
        this->inv[idx]->use( target );
    }
}








        // for ( int i = idx; i < 3; i++ )
        // {
        //     if( this->inv[i + 1] == NULL)
        //         break;
        //     this->inv[i] = this->inv[i + 1];
        //     this->inv[i + 1] = NULL;
        // }