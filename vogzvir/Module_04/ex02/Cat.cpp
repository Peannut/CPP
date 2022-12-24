/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:45:23 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 15:26:43 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	type = copy.type;
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Cat Copy Constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	type = copy.type;
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Cat Copy Assignment Operator" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor " << std::endl;
}

void	Cat::makeSound(void)	const
{
	std::cout << "Meow " << std::endl;
}