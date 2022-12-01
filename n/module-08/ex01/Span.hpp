/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:10:07 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/28 17:10:36 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_H_
# define _SPAN_H_

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>	_arr_num;
		size_t				_max_size;

	public:
		Span();
		Span(unsigned int);
		Span(Span&);
		Span& operator=(Span&);
		~Span();

		int	shortestSpan();
		int	longestSpan();
		void	addNumber(int);
		template<typename T> void	addRangeOfNumbers(T ctr_begin, T ctr_end)
		{
			int len;
			T temp = ctr_begin;
			for (len = 0; temp != ctr_end; len++)
				temp++;
			if (_arr_num.size() + len > _max_size)
				throw(std::overflow_error("Span is Full"));
			_arr_num.insert(_arr_num.end(), ctr_begin, ctr_end);
		}
};

#endif /* _SPAN_H_ */