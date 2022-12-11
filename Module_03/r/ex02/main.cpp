#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap frag1("Goku");
    FragTrap frag2(frag1);
    FragTrap frag3;

    frag3 = frag2;

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

    std::cout << std::endl;

    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.attack("wolf");
    frag1.takeDamage(8);
    frag1.beRepaired(2);
    frag1.highFivesGuys();

    std::cout << std::endl;

    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.attack("wolf");
    frag2.takeDamage(8);
    frag2.beRepaired(2);
    frag2.highFivesGuys();

    std::cout << std::endl;
    
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.attack("wolf");
    frag3.takeDamage(8);
    frag3.beRepaired(2);
    frag3.highFivesGuys();
}