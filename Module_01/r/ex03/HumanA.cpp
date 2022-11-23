#include "HumanA.hpp"

void HumanA::attack(void) {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name) , _weapon(weapon) {

}

HumanA::~HumanA()
{
}