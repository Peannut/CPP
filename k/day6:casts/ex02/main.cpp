/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:23:37 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/05 11:20:05 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

struct DATA {
	char c;
	int a;
	float f;
	float d;
};

int main(void)
{
	// Base *base = generate();
	Base *base = new Base();

	struct DATA obj;
	// obj.a = 32;
	// obj.c ='s';
	// obj.f = 32.32f;
	std::cout << sizeof(DATA) << std::endl;
	identify(base);
	identify(*base);
	return 0;
}