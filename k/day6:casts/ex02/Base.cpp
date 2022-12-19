/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:13:50 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 02:54:42 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	int random;

	random = time(NULL) % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
	}
	return (new C());
}

Base::~Base()
{
	std::cout << "Base deconstructor called" << std::endl;
}

void identify(Base* p)
{
	std::cout << "the object pointed to : ";
	Base *tab[3] = {dynamic_cast<A*>(p), dynamic_cast<B*>(p), dynamic_cast<C*>(p)};
	std::string str("ABC");
	for(int i = 0; i < 3; i++)
	{
		if (tab[i])
		{
			std::cout << str[i] << std::endl;
			return ;
		}
	}
	std::cout << " undefined type " << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void ) a;
		std::cout << "the object pointed to : A" << std::endl;
	}
	catch(std::bad_cast& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			(void) b;
			std::cout << "the object pointed to : B" << std::endl;
		}
		catch(std::bad_cast& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				(void) c;
				std::cout << "the object pointed to : C" << std::endl;
			}
			catch(std::bad_cast& e)
			{
				std::cout << "the object pointed to : undefined type" << std::endl;
			}
		}
	}
	
}
