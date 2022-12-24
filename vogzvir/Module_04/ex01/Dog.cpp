/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:45:14 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 17:15:02 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	type = copy.type;
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Dog Copy Constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	type = copy.type;
	if (brain)
		delete brain;
	*brain = *copy.brain;
	std::cout << "Dog Copy Assignment Operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor " << std::endl;
}


void	Dog::makeSound(void)	const
{
	std::cout << "Bark " << std::endl;
}