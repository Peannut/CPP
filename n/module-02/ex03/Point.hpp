/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:39:55 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/05 10:12:24 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_H_
# define _POINT_H_

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(const float x, const float y);
		Point(Point& point);
		Point&	operator=(Point& point);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* _POINT_H_ */