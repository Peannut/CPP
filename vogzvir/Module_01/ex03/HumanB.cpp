/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:00:29 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/21 17:03:41 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void) {
	if (_weapon)
    	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
    	std::cout << _name << " attacks with their bare hands" << std::endl;
		
}

HumanB::HumanB(const std::string name)
{ 
	 _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() { }