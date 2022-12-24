/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:41:16 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 21:32:59 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{	
	// Animal test;
	{
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		d->makeSound();
		c->makeSound();
		delete d;
		delete c;
	}
	return (0);
}