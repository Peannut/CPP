/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:18:34 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/15 10:22:00 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "[ WrongCat Default Constructor ]" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	type = copy.type;
	std::cout << "[ WrongCat Copy Constructor ]" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	type = copy.type;
	std::cout << "[ WrongCat Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[ WrongCat Destructor ]" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MeowMeow..." << std::endl;
}