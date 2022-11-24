/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:40:17 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/24 09:42:05 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl = Harl();
	
	if (ac != 2)
	{
		std::cerr << "wrong number of arguments" << std::endl;
		return(0);
	}
	harl.harlFilter(av[1]);
	return (0);
}