/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:15:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/09 21:31:57 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
    
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span& obj) : _n(obj._n), _vector(obj._vector)
{
}

Span& Span::operator=(const Span& obj)
{
    _n = obj._n;
    _vector = obj._vector;    
    return (*this);
}

const char* Span::NoSpaceLeftException::what() const throw()
{
    return "* exception : can't add a new element the span is full *";
}

const char* Span::DistanceSpanException::what() const throw()
{
    return "* can't calculate the distance with the available size *";
}

void Span::addNumber(int number)
{
	std::vector<int>::iterator it;
	it = _vector.end();
	_vector.insert(it, number);
	if(_vector.size() > _n)
		throw NoSpaceLeftException();
}

void Span::print_span() const
{
    for(unsigned int i = 0; i < _vector.size(); i++)
        std::cout << " " << _vector.at(i);
    std::cout << std::endl;
}

int Span::shortestSpan() const
{
    int min;
    int tmp;
    int size(_vector.size());
    vector TmpVector(_vector);

    if (!size || size == 1)
        throw DistanceSpanException();
    std::sort(TmpVector.begin(), TmpVector.end());
    min = TmpVector[1] - TmpVector[0];
    for(int i = 1; i < size - 1; i++)
    {
        tmp = TmpVector[i + 1] - TmpVector[i];
        min = (min > tmp) * tmp + (min <= tmp) * min;
    }
    return min;
}

int Span::longestSpan() const
{
    int size(_vector.size());
    vector TmpVector(_vector);

    if (!size || size == 1)
        throw DistanceSpanException();
    std::sort(TmpVector.begin(), TmpVector.end());
    return (TmpVector[size - 1] - TmpVector[0]);
}

Span::~Span()
{}
