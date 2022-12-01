/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:57:34 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/22 11:07:42 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *data = new Data;

	data->_raw_data = 1337;
	
	std::cout << "data->_raw_data = " << data->_raw_data << std::endl;
	uintptr_t uin_data = serialize(data);
	
	Data *data2 = deserialize(uin_data);

	std::cout << "data2->_raw_data = " << data2->_raw_data << std::endl;
	
	std::cout << (data == data2) << std::endl;
}