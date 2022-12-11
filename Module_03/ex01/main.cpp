/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:12:47 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 16:43:23 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("PEANUT");
	ScavTrap b("butter");

	a.attack("butter");
	b.takeDamage(10);
	b.beRepaired(20);
	b.attack("PEANUT");
	a.takeDamage(10);
	a.attack("butter");
	return (0);
}