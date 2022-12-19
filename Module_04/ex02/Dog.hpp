/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:45:12 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 16:45:17 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
#define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		virtual	~Dog();
		virtual	void	makeSound(void)	const;
};

#endif 