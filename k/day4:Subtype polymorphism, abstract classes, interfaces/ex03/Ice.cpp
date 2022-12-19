/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:53:05 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 23:00:21 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(Ice const& obj)
{
	*this = obj;
}

Ice& Ice::operator=(Ice const& obj)
{
	_type = obj.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice::~Ice()
{}