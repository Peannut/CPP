/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:19:38 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 11:40:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5, "undefined")
{
	std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy): Form(copy)
{
	std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& copy)
{
	(void)copy;
	std::cout << "PresidentialPardonForm Copy Assignment Constructor" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

void	PresidentialPardonForm::formTask() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}