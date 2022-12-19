/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:30:07 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/05 10:27:52 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& obj) : _brain(NULL)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj) 
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	_type = obj._type;
	if(_brain)
	{
		delete _brain;
		_brain = NULL;
	}
	if (obj._brain)
	{
		_brain = new Brain();
		*_brain = *obj._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}
