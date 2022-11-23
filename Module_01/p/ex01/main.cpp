/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:07:28 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 10:11:50 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n = 5;
	Zombie *horde = zombieHorde(n, "Max");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}