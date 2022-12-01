/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:39:51 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/05 10:05:21 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}

Point::Point(): x(0), y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y): x(x), y(y)
{
	// std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point& point): x(point.getX()), y(point.getY())
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(Point& point)
{
	(void)point;
	// std::cout << "Copy assignment constructor called" << std::endl;
	return (*this);
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}
