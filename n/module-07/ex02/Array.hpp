/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:18:01 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/25 15:07:25 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_H_
# define _ARRAY_H_

# include <iostream>

template <class T>
class Array
{
	private:
		T*		_arr;
		int 	_length;
	public:
		Array(){ _arr = 0; _length = 0; }
		
		Array(unsigned int n){ _arr = new T[n](); _length = n; }
		
		Array(const Array& copy){
			if (!copy._length)
			{
				_arr = 0;
				_length = 0;
				return ;
			}
				_arr = new T[copy._length]();
			for (int i = 0; i < copy._length; i++)
				_arr[i] = copy._arr[i];
			_length = copy._length;
		}
		
		Array& operator=(const Array& copy){
			if (_arr)
				delete[] _arr;
			if (!copy._length)
			{
				_arr = 0;
				_length = 0;
				return (*this);
			}
			_arr = new T[copy._length]();
			for (int i = 0; i < copy._length; i++)
				_arr[i] = copy._arr[i];
			_length = copy._length;
			return (*this);
		}
		
		~Array(){ if (_arr) delete[] _arr; }

		int	size() const { return (_length); }
		
		T&	operator[](int idx) const {
			if (idx < 0 || idx > _length - 1)
				throw (OutOfBoundsException());
			return (_arr[idx]);
		}
		
		class OutOfBoundsException: public std::exception{
			const char* what() const throw() { return ("Index is out of bounds"); }
		};
};

#endif /* _ARRAY_H_ */