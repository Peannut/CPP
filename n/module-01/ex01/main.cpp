/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:07:34 by marvin            #+#    #+#             */
/*   Updated: 2022/05/23 14:07:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *hordeofzombies;

	hordeofzombies = zombieHorde(10, "foo");

	for (int i = 0; i < 10; i++)
		hordeofzombies[i].announce();

	delete[] hordeofzombies;
	return (0);
}