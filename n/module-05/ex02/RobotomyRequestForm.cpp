/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:07:57 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 11:35:51 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "N/A")
{
	std::cout << "[ RobotomyRequestForm Default Constructor ]" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "[ RobotomyRequestForm Constructor ]" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy): Form(copy)
{
	std::cout << "[ RobotomyRequestForm Copy Constructor ]" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy)
{
	(void)copy;
	std::cout << "[ RobotomyRequestForm Copy Assignment Constructor  ]" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[ RobotomyRequestForm Destructor ]" << std::endl;
}

void	RobotomyRequestForm::formTask() const
{
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully " << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized unfortunately" << std::endl;
}
