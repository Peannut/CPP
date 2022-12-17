/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:45:14 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/17 12:19:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	type = copy.type;
	std::cout << "Dog Copy Constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	std::cout << "Dog Copy Assignment Operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor " << std::endl;
}


void	Dog::makeSound(void)	const
{
	std::cout << "OUf ouf " << std::endl;
}