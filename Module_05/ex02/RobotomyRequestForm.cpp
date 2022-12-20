/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:18:12 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 17:35:36 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "undefined")
{
	std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy): Form(copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy)
{
	(void)copy;
	std::cout << "RobotomyRequestForm Copy Assignment Constructor" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

void	RobotomyRequestForm::formTask() const
{
	std::cout << "some drilling noises." << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << getTarget() << "has been robotomized successfully!" << std::endl;
	else
		std::cout << getTarget() << "has not been robotomized unfortunately!" << std::endl;
}
