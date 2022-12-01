/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:08:50 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 10:30:22 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap d("H3LLB0T");

	d.attack("<None>");
	d.whoAmI();
	d.guardGate();
	d.highFivesGuys();
	return (0);
}