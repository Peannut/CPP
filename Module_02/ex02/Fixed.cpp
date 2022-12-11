/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:00 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/09 16:25:12 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) { 
    std::cout << "Copy constructor called" << std::endl; 
    (*this) = copy;
}

Fixed::Fixed(int const &copy) 
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_points = copy << fractional_bits;
}

Fixed::Fixed(const float &copy) 
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_points = (int)roundf(copy * (1 << Fixed::fractional_bits));
}

Fixed& Fixed::operator=(Fixed const &other) {
    std::cout << "Assigment constructor called" << std::endl;
    this->fixed_points = other.getRawBits();
    return (*this);
}


int    Fixed::getRawBits( void ) const
{
    return (fixed_points);
}

void    Fixed::setRawBits( int const raw ) 
{
    fixed_points = raw;
}

float Fixed::toFloat() const{
    return ((float) getRawBits() / (float) (1 << fractional_bits));
}

int Fixed::toInt() const {
    return (fixed_points >> fractional_bits);
}

bool    Fixed::operator>(Fixed const &obj) const {
    return (this->fixed_points > obj.fixed_points);
}
bool    Fixed::operator<(Fixed const &obj) const {
    return (this->fixed_points > obj. fixed_points);
}

bool    Fixed::operator>=(Fixed const &obj) const {
    return (this->fixed_points >= obj.fixed_points);
}

bool    Fixed::operator<=(Fixed const &obj) const {
    return (this->fixed_points <= obj.fixed_points);
}

bool    Fixed::operator==(Fixed const &obj) const {
    return (this->fixed_points == obj.fixed_points);
}

bool    Fixed::operator!=(Fixed const &obj) const {
    return (this->fixed_points != obj.fixed_points);
}

float   Fixed::operator+(Fixed const &obj) const {
    return (this->toFloat() + obj.toFloat());
}

// float   Fixed::operator-(Fixed const &obj) const {
//     return (this->toFloat() - obj.toFloat());
// }
Fixed	Fixed::operator-(const Fixed& obj)
{
	Fixed res;

	res.setRawBits(getRawBits() - obj.getRawBits());
	return (res);
}
// float   Fixed::operator*(Fixed const &obj) const {
//     return (this->toFloat() * obj.toFloat());
// }
Fixed   Fixed::operator*(Fixed const &obj) const {
    Fixed res;
	
    res.fixed_points = (fixed_points * fixed_points) / (1 << fractional_bits);
	return (res);
}

// float   Fixed::operator/(Fixed const &obj) const {
//     return (this->toFloat() / obj.toFloat());
// }

Fixed	Fixed::operator/(Fixed const &obj) const
{
	Fixed res;

    res.fixed_points = (fixed_points / fixed_points) * (1 << fractional_bits);
	// res.fixed_num = (fixed_num / fixed_num) * (1 << frac_bits);
	return (res);
}

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

std::ostream& operator<<(std::ostream& os, Fixed const &other)
{
    os << other.toFloat();
    return os;
}