/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:59:10 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/25 10:44:32 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie instance("Zombie1");
    Zombie *instanc2;

    instance.announce();
    instance.randomChump("Zombie2");

    instanc2 = instanc2->newZombie("Zombie3");
    instanc2->announce();
    delete instanc2;
}