/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:26:27 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/22 17:38:21 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) { return ( new A() ); }

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "the actual type of the object is : A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		try
		{
			B& b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "the actual type of the object is : B" << std::endl;
			return ;
		}
		catch(const std::exception& e)
		{
			std::cout << "the actual type of the object is : C" << std::endl;
		}
	}
}

void identify(Base* p)
{
	Base *check;

	check = dynamic_cast<A *>(p);
	if (check)
	{
		std::cout << "the actual type of the object is : A" << std::endl;
		return;
	}
	check = dynamic_cast<B *>(p);
	if (check)
	{
		std::cout << "the actual type of the object is : B" << std::endl;
		return;
	}
	check = dynamic_cast<C *>(p);
	if (check)
	{
		std::cout << "the actual type of the object is : C" << std::endl;
		return;
	}
}

int main()
{
	A a;
	B b;
	C c;


	identify(generate());
	identify(a);
	identify(b);
	identify(c);
	
	identify(*generate());
	identify(&a);
	identify(&b);
	identify(&c);
}