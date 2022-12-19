/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:38:00 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 20:51:15 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 1)
	{
		std::cout << "[ zero complaine, wow that's not normal ]" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
