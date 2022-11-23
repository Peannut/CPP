/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:07:28 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 10:56:00 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl = Harl();

	std::cout << "\033[31m"<<"DEBUG: " << "\033[0m"  << std::endl;
	harl.complain("DEBUG");
	std::cout << "\033[31m"<<"INFO: " << "\033[0m"  << std::endl;
	harl.complain("INFO");
	std::cout << "\033[31m"<<"WARNING: " << "\033[0m"  << std::endl;
	harl.complain("WARNING");
	std::cout << "\033[31m"<<"ERROR: " << "\033[0m"  << std::endl;
	harl.complain("ERROR");
	std::cout << "\033[31m"<<"wrong input: " << "\033[0m"  << std::endl;
	harl.complain("bla");
}
