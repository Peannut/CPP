/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:00 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/02 18:05:20 by zoukaddo         ###   ########.fr       */
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
