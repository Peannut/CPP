/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:05:55 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/06 12:24:30 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "[ ScavTrap Default Constructor ]" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "[ ScavTrap Constructor ]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	
	std::cout << "[ ScavTrap Copy Constructor ]" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	
	std::cout << "[ ScavTrap Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap Destructor ]" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_hit_points)
		std::cout << "ScavTrap " << _name << " has " << _hit_points << " hit points, can't attack" << std::endl;
	else if (_energy_points)
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " can't attack " << target << ", because there are no energy points left" << std::endl;
	if (_energy_points)
		_energy_points--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}
