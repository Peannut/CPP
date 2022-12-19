/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:55:05 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 11:35:36 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("No type yet (base class)")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	_type = obj._type;
	return (*this);
}

const std::string& Animal::getType() const
{
	//std::cout << "Animal getType member function called" << std::endl;
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "undefined sound ?!#>@@!>@! -_-?" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
