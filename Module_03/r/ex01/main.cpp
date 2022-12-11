#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap1("Ragnar");
    ClapTrap clap2(clap1);
    ClapTrap clap3;

    clap3 = clap2;

    ScavTrap scav1("Lion");
    ScavTrap scav2(scav1);
    ScavTrap scav3;

    scav3 = scav2;



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

    std::cout << std::endl;

    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.attack("wolf");
    scav1.takeDamage(8);
    scav1.beRepaired(2);
    scav1.guardGate();

    std::cout << std::endl;

    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.attack("wolf");
    scav2.takeDamage(8);
    scav2.beRepaired(2);
    scav2.guardGate();

    std::cout << std::endl;
    
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.attack("wolf");
    scav3.takeDamage(8);
    scav3.beRepaired(2);
    scav3.guardGate();
}