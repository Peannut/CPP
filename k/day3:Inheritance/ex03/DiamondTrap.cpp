/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:21:01 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/26 18:33:50 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = "X Æ A-12 Mus_clap_name";
	_name = "X Æ A-12 Musk";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << name <<" constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const FragTrap& obj)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	ClapTrap::_name = obj._name;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points  = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name " << _name << ", ClapTrap name " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Destructor called" << std::endl;
}