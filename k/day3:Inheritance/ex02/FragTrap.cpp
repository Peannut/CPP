/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:15:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/25 17:45:58 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << _name <<" constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " high fives guys 👋" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}
