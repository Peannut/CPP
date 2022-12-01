/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:42:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/19 11:29:53 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	tonny("Tonny", 151);
	
	std::cout << tonny << std::endl;
	// tonny.gradeDown();
	try {
		tonny.gradeDown();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << tonny << std::endl;
	
	try {
		tonny.gradeUp();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << tonny << std::endl;
	return (0);
}