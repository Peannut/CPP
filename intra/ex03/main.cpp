/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:04 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/21 11:02:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		Bureaucrat	a("Director1", 2);
		Intern		intern;
		Form		*b;
		
		try
		{
			b = intern.makeForm("PresidentialPardonForm", "Jinx");
			a.signForm(*b);
			a.executeForm(*b);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete b;
		std::cout << std::endl;
	}
	{
		Bureaucrat	a("Director2", 140);
		Intern		intern;
		Form		*b;
		
		try
		{
			b = intern.makeForm("RobotomyRequestForm", "Thresh");
			a.signForm(*b);
			a.executeForm(*b);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete b;
		std::cout << std::endl;
	}
	
	{
		Bureaucrat	a("Director3", 42);
		Intern		intern;
		Form		*b;
		
		try
		{
			b = intern.makeForm("ShrubberyCreationForm", "Katarina");
			a.signForm(*b);
			a.executeForm(*b);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete b;
		std::cout << std::endl;
	}

	return (0);
}