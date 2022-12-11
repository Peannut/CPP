/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:12:47 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 17:30:53 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("BOT1");
	ScavTrap b("BOT2");
	FragTrap c("BOT3");

	a.attack("BOT2");
	b.takeDamage(10);
	b.attack("BOT3");
	c.takeDamage(20);
	c.attack("BOT1");
	a.takeDamage(30);
	c.attack("BOT2");
	b.takeDamage(30);
	return (0);
}