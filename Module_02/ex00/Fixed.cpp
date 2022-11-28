/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:21:55 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/27 17:31:51 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructer Called" << std::endl;
    setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_points = other.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" <<std::endl;
    return (fixed_points);
}

void    Fixed::setRawBits(int const raw)
{
    fixed_points = raw;
}