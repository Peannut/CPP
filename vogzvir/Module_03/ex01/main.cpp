/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:12:47 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/15 16:44:51 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap p1("player1");
	ScavTrap p2("player2");

	p1.attack("player2");
	p2.takeDamage(100);
	p2.beRepaired(20);
	p2.takeDamage(20);
	p2.attack("player1");
	p1.takeDamage(10);
	p1.attack("player2");
	p2.guardGate();
	return (0);
}