/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:19:05 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/22 13:02:44 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& obj) : _brain(NULL)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj) 
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
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

void Cat::makeSound() const
{
	std::cout << "meow meeow" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}
