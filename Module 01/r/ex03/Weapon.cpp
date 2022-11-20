#include "Weapon.hpp"

std::string const &Weapon::getType(void) {
    return (_type);
}

void    Weapon::setType(std::string const &newType) {
    _type = newType;
}

Weapon::Weapon(std::string const &type) : _type(type) { }

Weapon::~Weapon()
{
}