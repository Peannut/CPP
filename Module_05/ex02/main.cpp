/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:04 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 16:53:46 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	{
		Bureaucrat peanut("Peanut", 4);
		PresidentialPardonForm form("katarina");
		
		peanut.signForm(form);
		form.execute(peanut);
	}
	std::cout << std::endl;
	{
		Bureaucrat itzredxd("itzredxd", 75);
		ShrubberyCreationForm form("Thresh");
		
		itzredxd.signForm(form);
		form.execute(itzredxd);	
	}
	std::cout << std::endl;
	{
		Bureaucrat smoker("smoker", 44);
		RobotomyRequestForm form("kled");
		
		smoker.signForm(form);
		form.execute(smoker);	
	}
	
	return (0);
}