/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:05:38 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 21:30:32 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{ 
	// const Animal* d = new Dog();
	// const Animal* c = new Cat();
	
	int petsNum = 6;
	Animal *pets[6];
	for (int i = 0; i < petsNum / 2; i++)
		pets[i] = new Cat();
		
	for (int i = petsNum / 2; i < petsNum; i++)
		pets[i] = new Dog();
	for (int i = 0; i < petsNum; i++)
		pets[i]->makeSound();
	for (int i = 0; i < petsNum; i++)
		delete pets[i];
	// delete d;
	// delete c;
	// system("leaks Animal");
	
	return (0);
}