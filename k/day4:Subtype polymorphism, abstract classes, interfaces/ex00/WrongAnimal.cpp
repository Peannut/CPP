/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:42:37 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 11:42:57 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("No type yet (base class)")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	_type = obj._type;
	return (*this);
}

const std::string& WrongAnimal::getType() const
{
	//std::cout << "WrongAnimal getType member function called" << std::endl;
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "undefined sound ?!#>@@!>@! -_-?" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}
