/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:13:32 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/06 12:16:51 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "[ ClapTrap Default Constructor ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 10;
	std::cout << "[ ClapTrap Constructor ]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ ClapTrap Copy Constructor ]" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ ClapTrap Copy Assignment Constructor ]" << std::endl;
	
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ ClapTrap Destructor ]" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!_hit_points)
		std::cout << "ClapTrap " << _name << " has " << _hit_points << " hit points, can't attack" << std::endl;
	else if (_energy_points)
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't attack " << target << ", because there are no energy points left" << std::endl;
	if (_energy_points)
		_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points)
		_hit_points -= amount;
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't take it anymore, KO..." << std::endl;
		_hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points)
	{
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't repaire, because there are no energy points left" << std::endl;
	if (_energy_points)
		_energy_points--;
}
