/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:59:49 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 07:38:03 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <iostream>

class Zombie
{
	private:
		std::string		name;
		
	public:
		void	announce(void);
		void	randomChump(std::string name);
   		Zombie* newZombie(std::string name);

		
		Zombie(std::string name);
		~Zombie();
};

#endif