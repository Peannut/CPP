#include "Animal.hpp"

Animal::Animal() : _type("not defined")
{
}

Animal::Animal(const Animal &other) : _type(other._type)
{
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal& other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void Animal::makeSound(void) const { std::cout << "Some noise" << std::endl; }

const std::string &Animal::getType(void) const { return(_type); };