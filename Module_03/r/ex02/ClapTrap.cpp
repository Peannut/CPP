#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap Default was created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "ClapTrap Copy " << this->name << " was created" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " was created" << std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &copy) {
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "ClapTrap Assignment " << this->name << " was created" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " was destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (checkAction()) {
        if (energyPoints > 0)
            energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else if (hitPoints <= 0)
        std::cout << "ClapTrap " << name << " Don't have hit points" << std::endl;
    else
        std::cout << "ClapTrap " << name << " Don't have enough energy points to be repaired" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    int damage = amount;
    if (hitPoints - damage < 0)
        hitPoints = 0;
    else
        hitPoints -= damage;
    
    std::cout << "ClapTrap " << name << " was taked damege of " << damage << " hitPoints. " << name << " have " << hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (checkAction()) {
        if (energyPoints > 0)
            energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " be rapaired with " << amount << " hitPoints. " << name << " have " << hitPoints << std::endl;
    }
    else if (hitPoints <= 0)
        std::cout << "ClapTrap " << name << " Don't have hit points" << std::endl;
    else
        std::cout << "ClapTrap " << name << " Don't have enough energy points to be repaired" << std::endl;
}

bool ClapTrap::checkAction() {
    return (hitPoints > 0 && energyPoints > 0 ? true : false);
}