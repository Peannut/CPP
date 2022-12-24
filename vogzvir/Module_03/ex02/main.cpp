/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:12:47 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/15 17:12:25 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap p1("payer1");
	ScavTrap p2("player2");
	FragTrap p3("player3");

	p1.attack("player2");
	p2.takeDamage(10);
	p2.attack("player3");
	p3.takeDamage(20);
	p3.attack("payer1");
	p1.takeDamage(30);
	p3.attack("player2");
	p2.takeDamage(50);
	return (0);
}