/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:12:54 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 16:44:18 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _atttackDamage(0) {
    std::cout << "ClapTrap Default was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_atttackDamage = 0;
	std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_atttackDamage = copy._atttackDamage;
	std::cout << "ClapTrap Copy Constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_atttackDamage = copy._atttackDamage;
	std::cout << "ClapTrap Copy Assignment Constructor" << std::endl;
	
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " was destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit Points can't attack" << std::endl;
	else if (_energyPoints)
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _atttackDamage << " points of damage " << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't attack " << target << " cuz no energy points left" << std::endl;
	if (_energyPoints)
		_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
		_hitPoints -= amount;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " man he is dead RIP... " << std::endl;
		_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints)
	{
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't repaire, cuz no energy points left" << std::endl;
	if (_energyPoints)
		_energyPoints--;
}
