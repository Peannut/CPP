/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/27 02:41:56 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap tonny("Tonny");
	ClapTrap beepper("Beepper");

	tonny.attack("Beepper");
	beepper.takeDamage(0);
	beepper.beRepaired(50);
	return 0;
}