/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:03:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/23 10:00:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEMPLATE_HPP_
# define _TEMPLATE_HPP_

#include <iostream>

template <class T>
void	swap(T& x, T& y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <class T>
T&	min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
}

template <class T>
T&	max(T& x, T& y)
{
	if (x < y)
		return (y);
	return (x);
}

#endif 