/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:00:59 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/15 13:02:05 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "[ Cat Default Constructor ]" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	type = copy.type;
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "[ Cat Copy Constructor ]" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	type = copy.type;
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "[ Cat Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "[ Cat Destructor ]" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow..." << std::endl;
}
