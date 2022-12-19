/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:38 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 23:00:20 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = NULL;

	zombie = zombieHorde( 7, "Foo");
	for(int i = 0; i < 7; i++)
		zombie[i].announce();
	delete [] zombie;
	zombie = NULL;
	return (0);
}