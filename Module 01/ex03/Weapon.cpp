/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:59:44 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 13:37:16 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const &Weapon::getType(void) {
    return (_type);
}

void    Weapon::setType(std::string const &newType) {
    _type = newType;
}

Weapon::Weapon(std::string const &type) : _type(type) { }

Weapon::~Weapon()
{
}