/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:15 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 02:58:53 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed pbc = Point::area(point, b, c);
	Fixed apc = Point::area(a, point, c);
	Fixed abp = Point::area(a, b, point);
	if(a == b || a == c || b == c)
		std::cerr << "it's not a triangle -_-" << std::endl;
	else if (Point::area(a, b, c) == (pbc + apc + abp)
		&& pbc != 0 && apc != 0 && abp != 0)
		return true;
	return false;
}
