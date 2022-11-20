/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:00:33 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 13:28:14 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void) {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name) , _weapon(weapon) {

}

HumanA::~HumanA()
{
}