/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:10:25 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 10:28:26 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[ FragTrap Default Constructor ]" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "[ FragTrap Constructor ]" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ FragTrap Copy Constructor ]" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << "[ FragTrap Copy Assignment Constructor ]" << std::endl;
	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "[ FragTrap Destructor ]" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " Requesting High Five" << std::endl;

}
