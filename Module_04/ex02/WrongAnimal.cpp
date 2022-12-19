/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:31:55 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/17 12:46:23 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wronganimal";
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	type = copy.type;
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	type = copy.type;
	std::cout << "WrongAnimal Copy Assignment Constructor" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound oo...." << std::endl;
}

const std::string&	WrongAnimal::getType() const
{
	return (type);
}