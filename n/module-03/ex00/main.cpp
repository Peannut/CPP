/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:08:50 by nelidris          #+#    #+#             */
/*   Updated: 2022/12/15 15:16:28 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("ROBOTO-47X");
	ClapTrap b("D3STR0Y3R");

	a.attack("D3STR0Y3R");
	b.takeDamage(17);
	b.beRepaired(20);
	b.attack("ROBOTO-47X");
	a.takeDamage(16);
	a.attack("D3STR0Y3R");
	return (0);
}