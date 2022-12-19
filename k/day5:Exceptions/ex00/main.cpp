/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:28 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/08 15:38:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("bob", 150);
		bureaucrat.DecrementGrade();
		std::cout << " * this message will not diplay on the screen,\n" 
		<< "cause the one of the methodes throw an exception *" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}