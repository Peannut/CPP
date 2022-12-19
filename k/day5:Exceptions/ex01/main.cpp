/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:28 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/05 17:38:58 by waboutzo         ###   ########.fr       */
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