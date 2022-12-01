/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:37:42 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/21 12:44:25 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const int val )
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(val << frac_bits);
}

Fixed::Fixed( const float val )
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(val * (1 << frac_bits)));
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
		std::cout << "Copy assignment operator called" << std::endl;
		fixed_num = obj.getRawBits();
		return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (fixed_num);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_num = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(fixed_num) / (float)(1 << frac_bits));
}

int		Fixed::toInt( void ) const
{
	return (fixed_num >> frac_bits);
}

std::ostream& operator<<(std::ostream& out, Fixed const & obj)
{
	out << obj.toFloat();
	return (out);
}