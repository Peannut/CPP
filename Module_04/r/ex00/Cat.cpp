#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
}

Cat::Cat(const Cat &other)
{
    this->_type = other._type;

}

Cat::~Cat()
{
    std::cout << "Animal " << _type << " destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }

    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}

const std::string& Cat::getType() const
{
    return (this->_type);
}