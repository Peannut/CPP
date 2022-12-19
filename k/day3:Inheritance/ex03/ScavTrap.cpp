/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:42:15 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/24 22:16:59 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}


ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name <<" constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}


ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hit_points && _energy_points)
	{
		std::cout << "ScavTrap "<< _name << " attacks "<< target <<", causing "<< _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << "ScavTrap "<< _name << " 0\% energy left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< _name << " is now in Gate keeper mode" << std::endl;
}