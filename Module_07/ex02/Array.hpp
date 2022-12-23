/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:49:37 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/23 19:28:08 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

#include <iostream>

template <class T>
class Array
{
	private:
		T*		arr;
		int 	len;
	public:
		Array(void)
		{
			len = 0;
			arr = nullptr;
		}
		Array(unsigned int n)
		{
			len = n;
			arr = new T[n];
		}
		
		Array(const Array& copy)
		{
			if (!copy.len)
			{
				arr = 0;
				len = 0;
				return ;
			}
			arr = new T[copy.len]();
			for (int i = 0; i < copy.len; i++)
				arr[i] = copy.arr[i];
			len = copy.len;
		}
		
		Array<T> operator=( const Array<T>& obj)
		{
			if (this == &obj)
				return *this;
			if (this->arr)
				delete [] this->arr;
			this->arr = nullptr;
			len = obj.len;
			if (!obj.arr && !obj.len)
				return *this;
			arr = new T[obj.len];
			for (int i = 0; i < len; i++)
				arr[i] = obj.arr[i];
			return *this;
		}


		T&	operator[](int index) const {
			if (index < 0 || index > len - 1)
				throw (OutOfBoundsException());
			return (arr[index]);
		}
		
		~Array()
   		{
        	if (arr)
				delete[] arr;
    	}

		int	size() const 
		{
			return (len);
		}
		
		
		class OutOfBoundsException: public std::exception{
			const char* what() const throw()
			{
				return ("Index is out of bounds"); 
			}
		};
};

#endif 
