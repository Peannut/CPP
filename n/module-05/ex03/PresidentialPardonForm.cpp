/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:08:14 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 10:32:36 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5, "N/A")
{
	std::cout << "[ PresidentialPardonForm Default Constructor ]" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "[ PresidentialPardonForm Constructor ]" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy): Form(copy)
{
	std::cout << "[ PresidentialPardonForm Copy Constructor ]" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& copy)
{
	(void)copy;
	std::cout << "[ PresidentialPardonForm Copy Assignment Constructor  ]" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[ PresidentialPardonForm Destructor ]" << std::endl;
}

void	PresidentialPardonForm::formTask() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}