/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:21:23 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/10 10:23:18 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Pokémon";
	std::cout << "[ WrongAnimal Default Constructor ]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	type = copy.type;
	std::cout << "[ WrongAnimal Copy Constructor ]" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	type = copy.type;
	std::cout << "[ WrongAnimal Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[ WrongAnimal Destructor ]" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Pikaaa...." << std::endl;
}

const std::string&	WrongAnimal::getType() const
{
	return (type);
}