/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:08:50 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/06 17:25:58 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("ROBOTO-47X");
	ScavTrap b("D3STR0Y3R");
	FragTrap c("M0N5T3R_X01");

	a.attack("D3STR0Y3R");
	b.takeDamage(10);
	b.attack("M0N5T3R_X01");
	c.takeDamage(20);
	c.attack("ROBOTO-47X");
	a.takeDamage(30);
	c.attack("D3STR0Y3R");
	b.takeDamage(30);
	return (0);
}