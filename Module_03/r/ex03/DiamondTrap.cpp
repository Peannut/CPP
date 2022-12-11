#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    this->name = "";
    ClapTrap::name += " Diamond";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap Default was created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : FragTrap(copy.name), ScavTrap(copy.name) {
    this->name = copy.name;
    ClapTrap::name += " Diamond";
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "DiamondTrap Copy " << this->name << " was created" << std::endl;
}

DiamondTrap    &DiamondTrap::operator=(DiamondTrap const &copy) {
    this->name = copy.name;
    ClapTrap::name += " Diamond";
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "DiamondTrap Assignment " << this->name << " was created" << std::endl;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string const name) : FragTrap(name), ScavTrap(name) {
    this->name = name;
    ClapTrap::name += " Diamond";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " born" << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << "I am " << name << " " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " was destroyed" << std::endl;
}