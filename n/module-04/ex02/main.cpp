/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:55:41 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/11 10:10:26 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		delete d;
		delete c;
	}

	// {
	// 	const Animal* a = new Animal();

	// 	delete a;
	// }
	
	return 0;
}