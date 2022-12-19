/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:17:22 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/07 02:05:51 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(const T* ar, size_t len, void (*f) (T const&))
{
	for(size_t i = 0; i < len; i++)
		f(ar[i]);
}

template <typename T>
void iter(T* ar, size_t len, void (*f) (T&))
{
	for(size_t i = 0; i < len; i++)
		f(ar[i]);
}

#endif