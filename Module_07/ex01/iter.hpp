/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:04:08 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/23 11:35:31 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

#include <iostream>

template <class T>
void	iter(T* arr, int length, void (*fun)(T &arg))
{
	int i = 0;
	while (i < length)
	{
		fun(arr[i]);
		i++;
	}
}

template< class T >
void print(T arg)
{
	std::cout << arg << std::endl;
}

#endif 