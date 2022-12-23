/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:05:28 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/22 15:07:02 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *b1;
	int rnd;
	std::srand(std::time(NULL));
	rnd = rand() % 3;
	switch (rnd)
	{
		case 0:
			b1 = new A;
			break;
		case 1:
			b1 = new B;
			break;	
		default:
			b1 = new C;
			break;
	}
	return b1;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{

	try
	{
		A obj;
		obj = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B ob;
		ob = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C ob;
		ob = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int main ()
{
	Base *p = NULL;
	p = generate();
	identify(p);
	std::cout << "*********" << std::endl;
	identify(*p);
	if (p)
		delete p;
}
