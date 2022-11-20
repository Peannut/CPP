/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:52:01 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 09:49:35 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    i = 0;

	Zombie *instance;
    std::string name = "PEANUT";
	
    instance = zombieHorde(4, name);
    while (i < 4)
    {
        instance[i].announce();
        i++;
    }
    delete []instance;
}