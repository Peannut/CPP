/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:21:12 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/20 21:00:55 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CPP
#define POINT_CPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float const  x, float const y);
		Point(const Point& point);
		bool operator==(const Point& obj) const;
		Point& operator=(const Point& point);
		Fixed getx(void) const;
		Fixed gety(void) const;
		static Fixed area(const Point& a, const Point& b, const Point& c);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif