/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/27 02:42:18 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Tonny("Tonny");
	ClapTrap beepper("Beepper");

	Tonny.attack("Beepper");
	beepper.takeDamage(20);
	beepper.beRepaired(20);
	Tonny.guardGate();
	return 0;
}