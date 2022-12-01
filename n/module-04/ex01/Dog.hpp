/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:50:46 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/10 10:51:58 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
# define _DOG_H_

# include "Animal.hpp"
# include "Brain.hpp"


class Dog: public Animal
{
	private:
		Brain* brain;
	
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog();

		virtual void	makeSound(void) const;
};

#endif /* _DOG_H_ */