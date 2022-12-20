/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:04 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 20:58:59 by zoukaddo         ###   ########.fr       */
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