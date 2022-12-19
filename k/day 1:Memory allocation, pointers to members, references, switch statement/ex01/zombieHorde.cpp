/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:46 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 14:23:27 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie;

	zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombie[i].name_setter(name);
	return zombie;
}
