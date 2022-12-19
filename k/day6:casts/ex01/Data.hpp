/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:12:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/04 06:47:07 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
	int _a;
	int _b;
	int _c;
	Data(int a, int b, int c);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
std::ostream& operator<<(std::ostream& o,const Data& obj);

#endif