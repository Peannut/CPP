/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:09:57 by nelidris          #+#    #+#             */
/*   Updated: 2022/10/01 15:13:52 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _max_size(0) {}

Span::Span(unsigned int N): _max_size(N) {}

Span::Span(Span& copy)
{
	_arr_num = copy._arr_num;
	_max_size = copy._max_size;
}

Span& Span::operator=(Span& copy)
{
	_arr_num = copy._arr_num;
	_max_size = copy._max_size;
	return (*this);
}

Span::~Span() {}

int	Span::shortestSpan()
{
	if (_arr_num.size() < 2)
		throw (std::length_error("Couldn't find shortest span"));
	std::vector<int> sorted = _arr_num;
	int	minimun_span = INT_MAX;
	
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++)
	{
		if ((it + 1) != sorted.end() && (*(it + 1) - *it) < minimun_span)
			minimun_span = (*(it + 1) - *it);
	}
	return (minimun_span);
}

int	Span::longestSpan()
{
	if (_arr_num.size() < 2)
		throw (std::length_error("Couldn't find longest span"));
	
	return (*std::max_element(_arr_num.begin(), _arr_num.end()) - *std::min_element(_arr_num.begin(), _arr_num.end()));

}

void	Span::addNumber(int num)
{
	if (_arr_num.size() == _max_size)
		throw(std::overflow_error("Span is Full"));
	_arr_num.push_back(num);
}
