/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:51:05 by nelidris          #+#    #+#             */
/*   Updated: 2022/10/01 15:07:58 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_H_
# define _EASYFIND_H_

#include <iostream>
#include <algorithm>

template <typename T>
int&	easyfind(T& cntnr, int to_find)
{
	typename T::iterator p = std::find(cntnr.begin(), cntnr.end(), to_find);
	
	if (p == cntnr.end())
		throw (std::overflow_error("Number Not Found"));
	return (*p);
}

#endif /* _EASYFIND_H_ */