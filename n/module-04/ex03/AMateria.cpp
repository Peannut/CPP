/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:02:33 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/13 10:27:22 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[ AMateria Default Constructor ]" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "[ AMateria Constructor ]" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	_type = copy._type;
	std::cout << "[ AMateria Copy Constructor ]" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	_type = copy._type;
	std::cout << "[ AMateria Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "[ AMateria Destructor ]" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses " << getType() << " at " << target.getName() <<  " *" << std::endl;
}
