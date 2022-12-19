/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:09:14 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/08 00:07:57 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern const& obj)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = obj;
}

const char * Intern::InvalidFormException::what() const throw()
{
	return "** Intern : Invalid form **";
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern makeForm member function called" << std::endl;

	Form *obj = NULL;
	int i;

	std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for(i = 0;  i < 3; i++)
		if(!array[i].compare(form))
			break;
	switch (i)
	{
		case 0:
		{
			obj = new PresidentialPardonForm(target);
			break;
		}
		case 1:
		{
			obj = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			obj = new ShrubberyCreationForm(target);
			break;
		}
		default:
		{
			std::cout << "name passed as parameter doesn’t exist" << std::endl;
			throw InvalidFormException();
			break;
		}
	}
	std::cout << "Intern creates " << form.c_str() << std::endl;	
	return (obj);
}

Intern& Intern::operator=(Intern const& obj)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}