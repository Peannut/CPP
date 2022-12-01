/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:57:29 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/09 15:35:15 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H_
# define _ANIMAL_H_

#include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		~Animal();

		const std::string&	getType() const;
		virtual void	makeSound(void) const;
};

#endif /* _ANIMAL_H_ */