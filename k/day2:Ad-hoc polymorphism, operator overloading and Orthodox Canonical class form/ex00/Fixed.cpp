/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:54 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 02:09:36 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called " << std::endl;
	_raw = obj.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
