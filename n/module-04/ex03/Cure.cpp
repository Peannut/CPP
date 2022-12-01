/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:17:31 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/13 10:34:23 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "[ Cure Default Constructor ]" << std::endl;
}

Cure::Cure(Cure& copy)
{
	(void)copy;
	std::cout << "[ Cure Copy Constructor ]" << std::endl;
}

Cure& Cure::operator=(Cure& copy)
{
	(void)copy;
	std::cout << "[ Cure Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "[ Cure Destructor ]" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}