/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:44:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 03:07:09 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(15, 15);
	Point b(23,30);
	Point c(50, 25);
	Point point(50,25);

	std::cout.setf(std::ios::boolalpha);
	std::cout << bsp(a, b, c, point) << std::endl;
	return (0);
}