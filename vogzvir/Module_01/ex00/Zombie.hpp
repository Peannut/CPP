/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:59:49 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/25 11:11:14 by zoukaddo         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif