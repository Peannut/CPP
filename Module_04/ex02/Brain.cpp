/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:31:36 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 17:12:33 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int i = 0;
	while(i < 100)
	{
		ideas[i] = "not defined";
		i++;
	}
	std::cout << "Brain Default Constructor" << std::endl;

}

Brain::Brain(Brain& copy)
{
	int i = 0;
	while(i < 100)
	{
		ideas[i] = copy.ideas[i];
		i++;
	}
	std::cout << "Brain Copy Constructor" << std::endl;

}

Brain& Brain::operator=(Brain& copy)
{
	int i = 0;
	while(i < 100)
	{
		ideas[i] = copy.ideas[i];
		i++;
	}
	std::cout << "Brain Copy Assignment Constructor" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}


const std::string *Brain::getIdeas() const
{
	return (ideas);
}
