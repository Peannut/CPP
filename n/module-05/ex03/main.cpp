/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:42:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 12:09:28 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Bureaucrat jonathan("Jonathan", 10);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Dio");
		if (rrf)
		{
			jonathan.signForm(*rrf);
			rrf->execute(jonathan);
		}
		delete rrf;
	}
	std::cout << std::endl;
	{
		Bureaucrat joseph("Joseph", 10);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Kars");
		if (rrf)
		{
			joseph.signForm(*rrf);
			rrf->execute(joseph);
		}
		delete rrf;
	}
	std::cout << std::endl;
	{
		Bureaucrat giorno("Giorno", 10);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Diavolo");
		if (rrf)
		{
			giorno.signForm(*rrf);
			rrf->execute(giorno);
		}
		delete rrf;
	}
	return (0);
}