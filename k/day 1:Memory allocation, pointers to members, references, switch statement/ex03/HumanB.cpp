/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:24:14 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/30 16:05:26 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout << _name << " attack with " 
		<<  _weapon->getType() << std::endl;
	}
}