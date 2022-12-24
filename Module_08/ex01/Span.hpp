/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:32:27 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 17:00:01 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

#include <iostream>
#include <vector>

class Span
{
	private:
		size_t max_size;
		std::vector<int>	arr;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& obj);
		Span&	operator=(const Span& obj);
		~Span();

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan();
		void	betterAddnumber(std::vector<int>::iterator first, std::vector<int>::iterator last);

		class spanfull : public std::exception
		{
			virtual const char	*what(void) const throw()
			{
				return "Error: Span is Full";
			}
		};
};


#endif 