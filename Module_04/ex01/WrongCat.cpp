/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:50:58 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/17 12:56:44 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	type = copy.type;
	std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	type = copy.type;
	std::cout << "WrongCat Copy Assignment Constructor" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound..." << std::endl;
}