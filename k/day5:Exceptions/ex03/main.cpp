/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:28 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/08 00:06:08 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("bob", 1);
		Intern someRandomIntern;
		Form* rrf;
	
		rrf = someRandomIntern.makeForm("shrubberydawd creation", "Bender");
		rrf->beSigned(bureaucrat);
		bureaucrat.signForm(*rrf);
		rrf->execute(bureaucrat);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}