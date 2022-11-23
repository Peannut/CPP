/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:06:57 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/19 10:07:01 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie) : _name(zombie)
{
	return;
}

Zombie::Zombie( void )
{
	this->_name = "Unknown";
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "destroyed zombie "<< this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout<< this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
