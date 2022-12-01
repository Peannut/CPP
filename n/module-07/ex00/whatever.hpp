/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:07:04 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/23 16:47:48 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_H_
# define _WHATEVER_H_

# include <iostream>

template<class T>
void	swap(T& a, T& b)
{
	T c(a);

	c = a;
	a = b;
	b = c;
}

template<class T>
T&	min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template<class T>
T&	max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif /* _WHATEVER_H_ */