/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:57:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 23:00:18 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(Cure const& obj)
{
	*this = obj;
}

Cure& Cure::operator=(Cure const& obj)
{
	_type = obj.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{}