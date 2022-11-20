#include "Harl.hpp"

void    Harl::complain(std::string level) {

    int num;
    void (Harl::*levelptr[])() = {&Harl::nothing, &Harl::debug, &Harl::info, &Harl::warming, &Harl::error};
    num = 0;
    !(level.compare("DEBUG")) && (num = 1);
    !(level.compare("INFO")) && (num = 2);
    !(level.compare("WARMING")) && (num = 3);
    !(level.compare("ERROR")) && (num = 4);
    
   (this->*levelptr[num])();
}

Harl::Harl() {
    std::cout << "Harl created" << std::endl;

}

Harl::~Harl() {
    std::cout << "Harl destroied" << std::endl;
}

void    Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
} 

void    Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warming( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::nothing( void ) {
    std::cout << "Probably complaining about insignificant problems" << std::endl;
}