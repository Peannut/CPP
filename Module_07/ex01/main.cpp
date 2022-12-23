/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:03:43 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/23 19:38:26 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string string[3] = {"miyoo", "mini", "v2"};
	char character[3] = {'p', 'c', 't'};
	int numberInt[3] = {1, 2, 3};
	float numberFloat[3] = {1.32, 2.45, 3.012};


	iter(string, 3, print);
	std::cout << "----------------" << std::endl;
	iter(character, 3, print);
	std::cout << "----------------" << std::endl;
	iter(numberInt, 3, print);
	std::cout << "----------------" << std::endl;
	iter(numberFloat, 3, print);
	return 0;
	
}
