/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:19:46 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/25 14:30:42 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("X Æ A-12 Musk"),_hit_points(10),_energy_points(10), _attack_damage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :_name(name), _hit_points(10),_energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name <<" constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points  = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points && _energy_points)
	{
		std::cout << "ClapTrap "<< _name << " attacks "<< target <<", causing "<< _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap "<< _name << " 0\% energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "<< _name << " take Damage of "<< amount << " Hit points" << std::endl;
	_hit_points -= amount;
	_hit_points = ((_hit_points < 0) * 0) + ((_hit_points >= 0) * _hit_points);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points && _energy_points)
	{
		std::cout << "ClapTrap "<< _name << " be Repaired, "<< amount << " hit points back" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap "<< _name <<  " 0\% energy left" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}
