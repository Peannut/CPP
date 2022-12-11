#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " was created" << std::endl;
}

FragTrap::FragTrap() {
    this->name = "";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Default was created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy.name) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "FragTrap Copy " << this->name << " was created" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &copy) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "FragTrap Assignment " << this->name << " was created" << std::endl;
    return (*this);
}

void    FragTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is now in high five guys mode" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " was destroyed" << std::endl;
}