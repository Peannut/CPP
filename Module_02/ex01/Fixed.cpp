/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:11:36 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/05 14:38:54 by zoukaddo         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &copy)
{ 
    std::cout << "Copy constructor called" << std::endl; 
    *this = copy;
}

Fixed::Fixed(int const &copy)
{
    std::cout << "Int Constructor clled" << std::endl;
    this->fixed_points = copy << fractional_bit;
    // std::cout << "int value :" << this->fixed_points << std::endl;
    
}

Fixed::Fixed(const float &copy)
{
    std::cout << "Float Constructor called" << std::endl;
    this->fixed_points = (roundf(copy * (1 << fractional_bit)));
    // std::cout << "float value:" << this->fixed_points << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_points = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, Fixed const &other)
{
    os << other.toFloat();
    return os;
}

float   Fixed::toFloat( void ) const
{
    return ((float)(fixed_points) / (float)(1 << fractional_bit));
}

int     Fixed::toInt( void ) const
{
    return (fixed_points >> fractional_bit);
}

int Fixed::getRawBits( void ) const 
{
    return (fixed_points);
}

void Fixed::setRawBits( int const raw ) 
{
    fixed_points = raw;
}