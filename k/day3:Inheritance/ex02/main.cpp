/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/24 22:25:51 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(void)
{
	FragTrap Tonny("Tonny");
	ClapTrap beepper("Beepper");

	Tonny.attack("Bepper");
	beepper.takeDamage(30);
	Tonny.highFivesGuys();
	return 0;
}