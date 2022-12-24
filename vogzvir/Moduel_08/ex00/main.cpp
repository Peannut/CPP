/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:13:36 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 19:41:56 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vector;

	for (int i =0; i < 10; i++)
		vector.push_back(i * 2);

	std::cout << "Vector values: ";
	for (int i =0; i < 10; i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "**** Search element 42 ****" << std::endl;
	try
	{
		easyfind(vector, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	std::cout << "**** Search element 10 ****" << std::endl;
	try
	{
		easyfind(vector, 10) ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	return (0);
}