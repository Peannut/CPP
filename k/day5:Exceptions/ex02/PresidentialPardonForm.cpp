/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:55:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/07 17:25:56 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5), _target("form")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target) 
{
	std::cout << "PresidentialPardonForm target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& obj)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& obj)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	Form::operator=(obj);
	_target = obj._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if ((executor.getGrade() <= this->getExecuteGrade())
		&& this->getStatus())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw (GradeTooHighException());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}