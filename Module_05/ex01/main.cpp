/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:04 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/19 18:11:40 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("bob", 50);
		Form form("form", 42, 13);

		bureaucrat.signForm(form);
		form.beSigned(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}