/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:24:25 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 13:04:01 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{	
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string const &Weapon::getType(void) const
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}