/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:51:55 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 09:51:01 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMMBIE_HPP_
# define _ZOMMBIE_HPP_

#include <iostream>

class Zombie
{
	private:
		std::string		name;
		
	public:
		void	setName(std::string name);
		void	announce(void);

		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif 