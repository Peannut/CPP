/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:05:28 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/22 09:19:54 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *a = new Data;
	a->raw = 23;

	std::cout << "raw data before = " << a->raw << std::endl;

	uintptr_t unin_data = serialize(a);

	Data *b = deserialize(unin_data);

	std::cout << "raw data after = " << b->raw << std::endl;

}
