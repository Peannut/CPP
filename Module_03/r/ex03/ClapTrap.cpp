#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

}

ClapTrap::ClapTrap(std::string const name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " was destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " was taked damege of " << amount << " hitPoints. " << name << " have " << hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (checkAction()) {
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " be rapaired with " << amount << " hitPoints. " << name << " have " << hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " Don't have enough energy points to be repaired " << std::endl;
}

bool ClapTrap::checkAction() {
    return (hitPoints > 0 && energyPoints > 0 ? true : false);
}