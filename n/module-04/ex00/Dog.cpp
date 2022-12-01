/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:09:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 15:32:49 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "[ Dog Default Constructor ]" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	type = copy.type;
	std::cout << "[ Dog Copy Constructor ]" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	std::cout << "[ Dog Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[ Dog Destructor ]" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark..." << std::endl;
}