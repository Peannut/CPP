/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:43:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 03:10:57 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	_raw = integer << _bits;
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	_raw = roundf(number * (1<<_bits));
	//std::cout << "Float constructor called " << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	//std::cout << "Copy assignment operator called " << std::endl;
	_raw = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed& obj) const
{
	if (_raw > obj._raw)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& obj) const
{
	if (_raw < obj._raw)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& obj) const
{
	if (_raw >= obj._raw)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& obj) const
{
	if (_raw <= obj._raw)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& obj) const
{
	if (_raw == obj._raw)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& obj) const
{
	if (_raw != obj._raw)
		return true;
	return false;
}

Fixed  Fixed::operator+(const Fixed& obj) const
{
	Fixed tmp;

	tmp._raw = this->_raw + obj._raw;
	return (tmp);
}

Fixed  Fixed::operator-(const Fixed& obj) const
{
	Fixed tmp;

	tmp._raw = this->_raw - obj._raw;
	return (tmp);
}

Fixed  Fixed::operator*(const Fixed& obj) const
{
	Fixed tmp;

	tmp._raw = (this->_raw * obj._raw) / (1<<_bits);
	return (tmp);
}

Fixed  Fixed::operator/(const Fixed& obj) const
{
	Fixed tmp;

	tmp._raw = ((float)this->_raw / obj._raw) * (1<<_bits);
	return (tmp);
}

std::ostream& operator<<(std ::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed& Fixed::operator++()
{
	(*this)._raw++;
	return (*this);
}

const Fixed Fixed::operator++( int )
{
	Fixed temp;

	temp._raw = _raw++;

	return temp;
}

Fixed& Fixed::operator--()
{
	(*this)._raw--;
	return (*this);
}

const Fixed Fixed::operator--( int )
{
	Fixed temp;

	temp._raw = _raw--;
	return temp;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1._raw <= obj2._raw) ? obj1 : obj2;
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	return (obj1._raw <= obj2._raw) ? obj1 : obj2;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1._raw >= obj2._raw) ? obj1 : obj2;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	return (obj1._raw >= obj2._raw) ? obj1 : obj2;
}

