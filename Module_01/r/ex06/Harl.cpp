#include "Harl.hpp"

void    Harl::complain(std::string level) {
    void    (Harl::*levelptr[]) () = {&Harl::nothing, &Harl::debug, &Harl::info, &Harl::warming, &Harl::error};
    int num;

    num = 0;

    (!level.compare("DEBUG")) && (num = 1);
    (!level.compare("INFO")) && (num = 2);
    (!level.compare("WARMING")) && (num = 3);
    (!level.compare("ERROR")) && (num = 4);

    switch (num)
    {
    case 1:
        (this->*levelptr[1]) ();
    case 2:
        (this->*levelptr[2]) ();
    case 3:
        (this->*levelptr[3]) ();
    case 4:
        (this->*levelptr[4]) ();
        break;
    default:
        (this->*levelptr[0]) ();
        break;
    }
}

void    Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warming( void ) {
    std::cout << "[ WARMING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::nothing( void ) {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}