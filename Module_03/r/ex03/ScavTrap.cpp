#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

    std::cout << "ScavTrap Default was created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy.name) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "ScavTrap Copy " << this->name << " was created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " was created" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &copy) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "ScavTrap Assignment " << this->name << " was created" << std::endl;
    return (*this);
}


void    ScavTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in guard gate mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " was destroyed" << std::endl;
}