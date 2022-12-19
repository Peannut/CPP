/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:44 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 13:04:08 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << name << " created"<< std::endl; 
}

std::string Zombie::name_getter() const
{
	return name;
}

void Zombie::name_setter(std::string str)
{
	this->name = str;
}

void Zombie::announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}
