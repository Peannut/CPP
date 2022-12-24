/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:32:31 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 16:59:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): max_size(0) {}

Span::Span(unsigned int n)
{
	max_size = n;
}

Span::~Span() 
{
	
}

Span::Span(const Span& obj)
{
	arr = obj.arr;
	max_size = obj.max_size;
}

Span& Span::operator=(const Span& obj)
{
	arr = obj.arr;
	max_size = obj.max_size;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (arr.size() == max_size)
		throw spanfull();
	arr.push_back(n);
}

int	Span::shortestSpan(void)
{
	if (arr.size() <= 1)
		throw (std::length_error("Couldn't find shortest span"));
	std::vector<int> sorted = arr;
	int	min_span = INT_MAX;
	
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::iterator itr = sorted.begin(); itr != sorted.end(); itr++)
	{
		if ((itr + 1) != sorted.end() && (*(itr + 1) - *itr) < min_span)
			min_span = (*(itr + 1) - *itr);
	}
	return (min_span);
}

int	Span::longestSpan()
{
	if (arr.size() < 2)
		throw (std::length_error("Couldn't find longest span"));
	
	return (*std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()));

}

void	Span::betterAddnumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	for (std::vector<int>::iterator it = first; it != last; it++)
	{
		try
		{
			addNumber(*it);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			break ;
		}
	}
}