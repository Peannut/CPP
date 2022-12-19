/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:19:05 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 11:35:03 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	_type = obj._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow meeow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}
