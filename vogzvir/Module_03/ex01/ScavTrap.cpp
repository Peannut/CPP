/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:13:18 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 16:43:37 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default was created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_atttackDamage = 20;
	std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_atttackDamage = copy._atttackDamage;
	
	std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_atttackDamage = copy._atttackDamage;
	
	std::cout << "ScavTrap Copy Assignment Constructor" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_hitPoints)
		std::cout << "ScavTrap " << _name << " has " << _hitPoints << " Hit points can't attack" << std::endl;
	else if (_energyPoints)
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _atttackDamage << " Points of damage " << std::endl;
	else
		std::cout << "ScavTrap " << _name << " can't attack " << target << " cuz no energy points left" << std::endl;
	if (_energyPoints)
		_energyPoints--;
}