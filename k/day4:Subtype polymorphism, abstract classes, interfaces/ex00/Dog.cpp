/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:30:07 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 11:35:59 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	_type = obj._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}
