#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("Ragnar");
    ClapTrap clap2(clap1);
    ClapTrap clap3;

    clap3 = clap2;


    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.attack("wolf");
    clap1.takeDamage(12);
    clap1.beRepaired(2);
    
    std::cout << std::endl;

    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.attack("wolf");
    clap2.takeDamage(12);
    clap2.beRepaired(2);

    std::cout << std::endl;

    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.attack("wolf");
    clap3.takeDamage(12);
    clap3.beRepaired(2);
}