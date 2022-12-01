/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:45:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 12:02:05 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[ Intern Default Constructor ]" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	(void)copy;
	std::cout << "[ Intern Copy Constructor ]" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	std::cout << "[ Intern Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "[ Intern Destructor ]" << std::endl;
}

Form*	Intern::makeForm(const std::string& form_name, const std::string& brcrat_name)
{
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (form_name == forms[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			break ;
		}
	}

	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(brcrat_name));
		case 1:
			return (new PresidentialPardonForm(brcrat_name));
		case 2:
			return (new ShrubberyCreationForm(brcrat_name));
		default:
			std::cerr << "There is no such Form with this name: " << form_name << std::endl;
	}
	return (NULL);
}
