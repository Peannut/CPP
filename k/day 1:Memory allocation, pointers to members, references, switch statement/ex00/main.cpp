/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:09:53 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 17:25:19 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = NULL;

	randomChump("Foo");
	
	zombie = newZombie("Ziiii");
	zombie->announce();
	delete(zombie);
	zombie = NULL;
	return (0);
}
