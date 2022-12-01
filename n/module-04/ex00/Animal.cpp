/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:00:48 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 15:32:09 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "N/A";
	std::cout << "[ Animal Default Constructor ]" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	type = copy.type;
	std::cout << "[ Animal Copy Constructor ]" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	type = copy.type;
	std::cout << "[ Animal Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[ Animal Destructor ]" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "???" << std::endl;
}

const std::string&	Animal::getType() const
{
	return (type);
}
