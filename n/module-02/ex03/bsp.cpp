/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:37:48 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/05 10:34:39 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	crossProduct(Point const &a, Point const &b, Point const &c)
{
	Fixed area;

	// (Xca{Xa - Xc} * Ycb{Yb - Yc}) - (Yca{Ya - Yc} * Xcb{Xb - Xc})
	area = std::abs(((((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((a.getY() - c.getY()) * (b.getX() - c.getX()))) / Fixed(2)).toFloat());
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if ((crossProduct(a, b, c) - (crossProduct(point, b, c) + crossProduct(a, point, c) + crossProduct(a, b, point))) == Fixed(0)
		&& crossProduct(a, b, c) != Fixed(0) && crossProduct(point, b, c) != Fixed(0)
		&& crossProduct(a, point, c) != Fixed(0) && crossProduct(a, b, point) != Fixed(0))
		return (true);
	return (false);
}