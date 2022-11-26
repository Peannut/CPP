/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:21:55 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/26 19:40:31 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructer Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
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