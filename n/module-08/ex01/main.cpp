/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:15:29 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/28 17:19:26 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{

	Span sp(20);
	std::vector<int> arr;
	
	for (int i = 0; i < 20; i++)
		arr.push_back(i * 10);

	for(std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	try
	{
		sp.addRangeOfNumbers(arr.begin(), arr.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	// try
	// {
	// 	Span sp(10000);
		
	// 	std::vector<int> arr;

	// 	for (int i = 0; i < 10000; i++)
	// 		arr.push_back((i * 4) / 3 + 1);
			
	// 	sp.addRangeOfNumbers(arr.begin(), arr.end());
	// 	std::cout << sp.longestSpan() << std::endl;
	// 	std::cout << sp.shortestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// try
	// {
	// 	Span sp(INT_MAX / 100);
		
	// 	std::vector<int> arr;
	// 	std::srand(std::time(NULL));
	// 	for (int i = 0; i < INT_MAX / 100; i++)
	// 		arr.push_back(std::rand());
			
	// 	sp.addRangeOfNumbers(arr.begin(), arr.end());
	// 	std::cout << sp.longestSpan() << std::endl;
	// 	std::cout << sp.shortestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}