/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:35:45 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/07 02:16:51 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array()
{
	_array = NULL;
	_n = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_n = n;
}

template <typename T>
Array<T>::Array(const Array &obj) : _array(NULL)
{
	*this = obj;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _n;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &obj)
{
	if (_array)
	{
		delete[] _array;
		_array = NULL;
	}
	if (obj._array)
	{
		_array = new T[obj._n];
		for(size_t i = 0; i < obj._n; i++)
			_array[i] = obj._array[i];
	}
	_n = obj._n;
	return (*this);
}

template <typename T>
const char * Array<T>::OutOfBoundException::what() const throw()
{
	return "exception : index out of bound"; 
}

template <typename T>
T& Array<T>::operator[] (unsigned int index) const
{
	if(index >= _n)
		throw OutOfBoundException();
	return _array[index];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

#endif