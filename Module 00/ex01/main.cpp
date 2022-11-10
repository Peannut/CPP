/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:44:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/09 20:00:46 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	buffer;
	while(42)
	{
		
		std::getline (std::cin, buffer);
		if (std::cin.eof ())
			exit(1);
		if (buffer == "ADD")
			std::cout << "yo" << std::endl;
		if (buffer == "EXIT")
			exit(1);
		if (buffer == "SEARCH")
			;
		std::cout << buffer << std::endl;
	}
}