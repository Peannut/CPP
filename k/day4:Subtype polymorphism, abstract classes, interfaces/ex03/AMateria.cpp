/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:42:42 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 23:00:12 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("no type yet")
{}

AMateria::AMateria(AMateria const& obj)
{
	*this = obj;
}

AMateria& AMateria::operator=(AMateria const& obj)
{
	(void) obj;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{}

std::string const & AMateria::getType() const
{
	return _type;
}

AMateria::~AMateria()
{}