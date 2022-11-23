/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:06:39 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/19 10:08:26 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
	std::string	_name;

	public:
	Zombie(void);
	Zombie(std::string zombie);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
