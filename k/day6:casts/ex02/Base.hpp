/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:02:09 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/13 11:16:28 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdlib.h>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif