/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:33:56 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/15 13:06:04 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "N/A";
	std::cout << "[ Brain Default Constructor ]" << std::endl;
}

Brain::Brain(Brain& copy)
{
	(void)copy;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "[ Brain Copy Constructor ]" << std::endl;
}

Brain& Brain::operator=(Brain& copy)
{
	(void)copy;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "[ Brain Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[ Brain Destructor ]" << std::endl;
}

const std::string *Brain::getIdeas() const
{
	return (ideas);
}
