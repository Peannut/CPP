/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:14:56 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 13:37:01 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define  _EASYFIND_HPP_

#include <iostream>
#include <algorithm>

class	Exception : public std::exception
{
	const char* what() const throw()
	{
		return("Element not found!");
	};
};

template <typename T>
int& easyfind(T& container, int to_find) 
{
	typename T::iterator p = std::find(container.begin(), container.end(), to_find);
	
	if (p == container.end())
		throw Exception();
	std::cout << "Found the element: " << to_find << std::endl << std::endl;
	return (*p);
}


#endif 