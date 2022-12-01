/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:42:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/17 12:34:22 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	tonny("Tonny", 75);
	Form		cnss_form("CNSS's Form", 70, 85);
	
	try{
		
		tonny.signForm(cnss_form);
		std::cout << tonny << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << cnss_form << std::endl;
	return (0);
}