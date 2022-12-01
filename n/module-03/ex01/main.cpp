/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:08:50 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/06 17:06:57 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("ROBOTO-47X");
	ScavTrap b("D3STR0Y3R");

	a.attack("D3STR0Y3R");
	b.takeDamage(10);
	b.beRepaired(20);
	b.attack("ROBOTO-47X");
	a.takeDamage(10);
	a.attack("D3STR0Y3R");
	return (0);
}