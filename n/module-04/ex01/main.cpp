/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:55:41 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/15 14:17:49 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	
	delete d;
	delete c;
	return 0;
}