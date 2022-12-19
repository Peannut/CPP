/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:10:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/29 15:56:40 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for(int i = 0; i < 100 ;i++)
		_ideas[i].assign(obj._ideas[i]);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}