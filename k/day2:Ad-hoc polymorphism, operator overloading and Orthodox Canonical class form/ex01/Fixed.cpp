/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:00:04 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 02:12:36 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	_raw = integer << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	_raw = roundf(number * (1<<_bits));
	std::cout << "Float constructor called " << std::endl;
}

Fixed::Fixed(const Fixed& obj)
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

int Fixed::toInt( void ) const
{
	return (_raw >> _bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)_raw / (1<<_bits));
}

std::ostream& operator<<(std ::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
