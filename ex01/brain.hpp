#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class brain
{

    public:
        brain( void );
        brain( brain const &src);
        brain& operator=(brain const &);
        ~brain();
        std::string getIdea( int i ) const;
        void setIdea( int i, std::string idea );

    protected:
        std::string ideas[100];
};

#endif
