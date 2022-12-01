/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:33:58 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 10:34:05 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[ Diamond Default Constructor ]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
	std::cout << "[ Diamond Constructor ]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	_name = copy._name;
	ClapTrap::_name = copy.ClapTrap::_name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ Diamond Copy Constructor ]" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	_name = copy._name;
	ClapTrap::_name = copy.ClapTrap::_name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ Diamond Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ Diamond Destructor ]" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
