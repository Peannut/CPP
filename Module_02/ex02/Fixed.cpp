/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:00 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/13 19:35:17 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed( const int value )
{
    // std::cout << "Int constructor" << std::endl;
    setRawBits(value <<  fractional_bits);
}

Fixed::Fixed ( const float value)
{
    // std::cout << "Float constructor" << std::endl;
    setRawBits(roundf(value * (1 << fractional_bits)));
}
Fixed::Fixed(const Fixed& obj)
{
    // std::cout << "Copy assignment operator" << std::endl;
    *this  = obj;
}
Fixed& Fixed::operator=(const Fixed& obj)
{
    fixed_points = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (fixed_points);
}
void    Fixed::setRawBits( int const raw )
{
    fixed_points = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)fixed_points / (float)(1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return (fixed_points >> fractional_bits);
}

/*****************Operators*******************/

bool    Fixed::operator>(const Fixed& obj)
{
    return (getRawBits() > obj.getRawBits()); 
}

bool    Fixed::operator<(const Fixed& obj)
{
    return (getRawBits() < obj.getRawBits());
}

bool    Fixed::operator>=(const Fixed& obj)
{
    return (getRawBits() >= obj.getRawBits());
}

bool    Fixed::operator<=(const Fixed& obj)
{
    return (getRawBits() <= obj.getRawBits());
}

bool    Fixed::operator==(const Fixed& obj)
{
    return (getRawBits() == obj.getRawBits());
}

bool    Fixed::operator!=(const Fixed &obj)
{
    return (getRawBits() != obj.getRawBits());
}

/****************arithmitic opera**********/

Fixed   Fixed::operator+(const Fixed& obj)
{
    Fixed r;
    r.setRawBits(getRawBits() + obj.getRawBits());
    return (r);
}

Fixed   Fixed::operator-(const Fixed& obj)
{
    Fixed r;
    r.setRawBits(getRawBits() - obj.getRawBits());
    return (r);
}

// Fixed   Fixed::operator*(const Fixed& obj)
// {
//     Fixed r;
//     r.fixed_points = (fixed_points * fixed_points) / (1 << fractional_bits);
//     return (r);
// }

// Fixed   Fixed::operator/(const Fixed& obj)
// {
//     Fixed r;
//     r.fixed_points = (fixed_points * fixed_points) * (1 << fractional_bits);
//     return (r); 
// }

Fixed	Fixed::operator*( const Fixed &obj )
{
	return (Fixed(obj.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/( const Fixed &obj )
{
	return (Fixed(obj.toFloat() / this->toFloat()));
}

/**********--I**I++ AND I--**--I*********/

Fixed& Fixed::operator++() {
    ++this->fixed_points;
    return (*this);
}

Fixed   Fixed::operator++(int){
    Fixed old = *this;
    operator++();
    return (old);
}

Fixed& Fixed::operator--()
{
    --this->fixed_points;
    return (*this);
}

Fixed   Fixed::operator--(int){
    Fixed   old;
    old = *this;
    operator--();
    return (old);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	std::cout << obj.toFloat();
	return (out);
}