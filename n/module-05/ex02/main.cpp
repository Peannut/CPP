/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:42:17 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/19 11:41:38 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		Bureaucrat joseph("Joseph", 4);
		PresidentialPardonForm pre("Blood Stream");
		
		joseph.signForm(pre);
		pre.execute(joseph);
	}
	std::cout << std::endl;
	{
		Bureaucrat jonathan("Jonathan", 75);
		ShrubberyCreationForm pre("Phantom Blood");
		
		jonathan.signForm(pre);
		pre.execute(jonathan);	
	}
	std::cout << std::endl;
	{
		Bureaucrat jolyne("Jolyne", 44);
		RobotomyRequestForm pre("Stone Ocean");
		
		jolyne.signForm(pre);
		pre.execute(jolyne);	
	}
	
	return (0);
}