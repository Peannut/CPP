/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:13:54 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/12 17:42:18 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


Data::Data(int a, int b, int c) : _a(a), _b(b), _c(c)
{
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& o,const Data& obj)
{
	o << obj._a << " , " << obj._b << " , " << obj._c; 
	return o;
}