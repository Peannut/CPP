/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:41:25 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 09:41:28 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}
std::string const & Weapon::getType(void)
{
	std::string &ref = this->_type;
	return (ref);
}
void Weapon::setType(std::string type)
{
	this->_type = type;
}
