/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:15:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/09 21:31:48 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
#include <array>
#include <cmath>

typedef std::vector<int>::iterator Iterator;
typedef std::vector<int> vector;

class Span
{
    private:
        unsigned int _n;
        vector _vector;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        void addNumber(int number);
        template <typename T>
        void Advanced_Add_Number(T first,T end)
        {
            for(T it = first; it < end; it++)
                addNumber(*it);
        }
        void print_span() const;
		class NoSpaceLeftException : public std::exception
		{	public:
				const char* what() const throw();};
        class DistanceSpanException : public std::exception
		{	public:
				const char* what() const throw();};
        int shortestSpan() const;
        int longestSpan() const;
        ~Span();
};

#endif