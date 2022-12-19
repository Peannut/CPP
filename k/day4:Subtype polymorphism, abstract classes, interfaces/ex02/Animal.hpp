/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:47:43 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/22 13:52:54 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual void makeSound() const = 0;
		const std::string& getType() const;
		virtual ~Animal();
};

#endif