/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:49:49 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/23 18:56:18 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_H_
# define _ITER_H_

#include <iostream>

template<class A, class B, class C>
void	iter(A* data, B len, C func)
{
	for (B i = 0; i < len; i++)
		func(data[i]);
}


#endif /* _ITER_H_ */