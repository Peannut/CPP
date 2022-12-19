/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:44:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 11:45:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "Cat";
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	_type = obj._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "meow meeow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
