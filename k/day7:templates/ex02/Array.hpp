/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:20:11 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/10 00:57:48 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _n;
	public:
		Array();
		Array(const Array &obj);
		Array(unsigned int n);
		T& operator[] (unsigned int index) const;
		unsigned int size() const;
		class OutOfBoundException : public std::exception
		{	public:
				const char * what() const throw();};
		Array &operator=(const Array &obj);
		~Array();
};

#include "Array.tpp"

#endif