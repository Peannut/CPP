/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:51:52 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 09:49:05 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	i = 0;

	Zombie* instance = new Zombie[N];

	while(i < N)
	{
		instance[i].setName(name);
		i++;
	}
	return (instance);
}