/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:55:03 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/28 16:50:41 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v1;
	std::list<int> l1;
	std::deque<int> d1;

	for (int i = 1; i <= 50; i++){	
		v1.push_back(i * 10);
		l1.push_back(i * 10);
		d1.push_back(i * 10);
	}
	
	try{
		std::cout << easyfind(v1, 2) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	try{
		std::cout << easyfind(l1, 50) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	try{
		std::cout << easyfind(d1, 50) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return (0);
}