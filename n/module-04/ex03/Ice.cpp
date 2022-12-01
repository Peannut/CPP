/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:13:15 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/13 10:34:31 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "[ Ice Default Constructor ]" << std::endl;
}

Ice::Ice(Ice& copy)
{
	(void)copy;
	std::cout << "[ Ice Copy Constructor ]" << std::endl;
}

Ice& Ice::operator=(Ice& copy)
{
	(void)copy;
	std::cout << "[ Ice Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "[ Ice Destructor ]" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
