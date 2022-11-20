#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {

    private:
        void    debug( void );
        void    info( void );
        void    warming( void );
        void    error( void );
        void    nothing( void );

    public:
        void    complain( std::string level);
        Harl();
        ~Harl();
};

#endif