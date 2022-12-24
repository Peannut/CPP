/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:59:10 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/25 11:28:12 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
 	Zombie instance("Zombie1");
    instance.announce();
	randomChump("Zombie2");
    Zombie *instance2 = newZombie("Zombie3");
    instance2->announce();
    delete instance2;
}