#include "Dog.hpp"

Dog::Dog()
{
  this->_type = "Dog";

}

Dog::Dog(const Dog &other)
{
  if (this != &other)
  {
    this->_type = other._type;
  }
}

Dog::~Dog()
{
  std::cout << "Animal " << _type << " destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
  std::cout << "Au" << std::endl;
}

std::string Dog::getType(std::string type)
{
  return (this->_type);
}