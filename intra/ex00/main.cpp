/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:17:41 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/19 17:31:14 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("peanut", 150);
		bureaucrat.gradeDecrement();
		std::cout << "no exception throwed " << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}