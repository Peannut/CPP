/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:11:41 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 14:38:54 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("PEANUT");
	ClapTrap b("WEE");

	a.attack("WEE");
	b.takeDamage(10);
	b.beRepaired(20);
	b.attack("PEANUT");
	a.takeDamage(10);
	a.attack("WEE");
	return (0);
}