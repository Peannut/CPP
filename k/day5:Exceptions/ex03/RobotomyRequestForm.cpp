/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:55:37 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/11 01:27:27 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), _target("form")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request",72,45), _target(target) 
{
	std::cout << "RobotomyRequestForm target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& obj)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	Form::operator=(obj);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "drilling noises........." << std::endl;
		sleep(1);
	/*wrong implementation of subject XD*/
	if ((executor.getGrade() <= this->getExecuteGrade())
		&& this->getStatus())
		std::cout << _target << " has been robotomized successfully 50% of the time." << std::endl;
	else
	{
		std::cout << _target << "the robotomy failed." << std::endl;
		throw (GradeTooHighException());
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm deconstructor called" << std::endl;
}