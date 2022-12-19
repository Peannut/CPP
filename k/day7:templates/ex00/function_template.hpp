/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_template.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:45:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/06 22:20:41 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_TEMPLATE_HPP
#define FUNCTION_TEMPLATE_HPP


#include <iostream>

template <typename T>
void swap(T& x, T&y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T& max(const T& x,const T&y)
{
	return (x > y) ? x : y;
}

template <typename T>
const T& min(const T& x, const T&y)
{
	return (x < y) ? x : y;
}
#endif