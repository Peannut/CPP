#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("not defined")
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) 
{
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void WrongAnimal::makeSound(void) const { std::cout << "Some noise" << std::endl; }

const std::string &WrongAnimal::getType(void) const { return(_type); };