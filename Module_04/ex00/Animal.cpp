/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:03:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 19:53:17 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "IDK";
	std::cout << "Animal Default Constructor " << std::endl;
}

Animal::Animal(const Animal& copy)
{
	type = copy.type;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	type = copy.type;
	std::cout << "Animal Copy Assignment Constructor" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

void	Animal::makeSound(void) {
	std::cout << "??" << std::endl;
}

const std::string& Animal::getType() const{
	return (type);
}

