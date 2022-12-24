/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:14:36 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 17:27:15 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_atttackDamage = 30;
	std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_atttackDamage = copy._atttackDamage;
	_energyPoints = copy._energyPoints;
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_atttackDamage = copy._atttackDamage;
	std::cout << "FragTrap Copy Assignment Constructor" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << _name << "Asking for High Five" << std::endl;
}
