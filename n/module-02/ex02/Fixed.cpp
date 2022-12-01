/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:37:42 by nelidris          #+#    #+#             */
/*   Updated: 2022/11/01 13:40:47 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	// std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const int val )
{
	// std::cout << "Int constructor called" << std::endl;
	setRawBits(val << frac_bits);
}

Fixed::Fixed( const float val )
{
	// std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(val * (1 << frac_bits)));
}

Fixed::Fixed(const Fixed& obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
		// std::cout << "Copy assignment operator called" << std::endl;
		fixed_num = obj.getRawBits();
		return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (fixed_num);	
}

void	Fixed::setRawBits(int const raw)
{
	fixed_num = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)fixed_num / (float)(1 << frac_bits));
}

int		Fixed::toInt( void ) const
{
	return (fixed_num >> frac_bits);
}

/* comparison operators */

bool	Fixed::operator>(const Fixed& obj)
{
	return (getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed& obj)
{
	return (getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed& obj)
{
	return (getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed& obj)
{
	return (getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed& obj)
{
	return (getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed& obj)
{
	return (getRawBits() != obj.getRawBits());
}

/* arithmetic operators */

Fixed	Fixed::operator+(const Fixed& obj)
{
	Fixed res;

	res.setRawBits(getRawBits() + obj.getRawBits());
	return (res);
}
Fixed	Fixed::operator-(const Fixed& obj)
{
	Fixed res;

	res.setRawBits(getRawBits() - obj.getRawBits());
	return (res);
}
Fixed	Fixed::operator*(const Fixed& obj)
{
	Fixed res;
	
	res.fixed_num = (fixed_num * fixed_num) / (1 << frac_bits);
	return (res);
}
Fixed	Fixed::operator/(const Fixed& obj)
{
	Fixed res;

	res.fixed_num = (fixed_num / fixed_num) * (1 << frac_bits);
	return (res);
}

/* increment/decrement */

Fixed	Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator--()
{
	
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed prev = *this;
	
	setRawBits(getRawBits() + 1);
	return (prev);
}

Fixed	Fixed::operator--(int)
{
	Fixed prev = *this;
	
	setRawBits(getRawBits() - 1);
	return (prev);
}

/* static member functions */

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	return (f1);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	return (f1);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	std::cout << obj.toFloat();
	return (out);
}