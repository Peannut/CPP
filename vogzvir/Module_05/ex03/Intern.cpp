/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:42:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/21 11:02:23 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	(void)copy;
	std::cout << "Intern Copy Constructor" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	std::cout << "Intern Copy Assignment Constructor" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}

Form*	Intern::makeForm(const std::string& form_name, const std::string& brcrat_name)
{
	std::string forms[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int i = 0;

	while (i < 3)
	{
		if (form_name == forms[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			break ;
		}
		i++;
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
		{
			std::cerr << "There is no such Form with this name: " << form_name << std::endl;
			std::exit(1);
		}
	}
	return (NULL);
}
