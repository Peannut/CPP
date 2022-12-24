/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:11:41 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/15 17:19:12 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap p1("player1");
	ClapTrap p2("player2");

	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.attack("player2");
	p1.beRepaired(6);
	p2.takeDamage(10);
	p2.attack("player1");
	p2.beRepaired(10);
	p2.attack("player1");
	p1.takeDamage(10);

	return (0);
}