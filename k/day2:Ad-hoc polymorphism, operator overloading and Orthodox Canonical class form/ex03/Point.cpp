/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:26:11 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 03:06:00 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const  x, float const y) : _x(x),  _y(y)
{
}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& point)
{
	(void) point;
	return *this;
}

Fixed Point::getx(void) const
{
	return _x;
}

Fixed Point::gety(void) const
{
	return _y;	
}

Fixed Point::area(const Point& a, const Point& b, const Point& c)
{
	Fixed tmp(((a.getx() * (b.gety() - c.gety()) +
	b.getx() * (c.gety() - a.gety()) +
	c.getx() * (a.gety() - b.gety())) / 2));

	return  (tmp >= 0) ? tmp : (tmp * -1);
}

bool Point::operator==(const Point& obj) const
{
	if (this->getx() == obj.getx() && this->gety() == obj.gety())
		return true;
	return false;
}

Point::~Point()
{
}
