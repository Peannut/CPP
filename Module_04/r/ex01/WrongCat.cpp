#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    this->_type = other._type;

}

WrongCat::~WrongCat()
{
    std::cout << "WrongAnimal " << _type << " destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        this->_type = other._type;
    }

    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Au" << std::endl;
}

const std::string& WrongCat::getType() const
{
    return (this->_type);
}