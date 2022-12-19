/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:56:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 12:59:35 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string nam);
		~Zombie( void );
		std::string name_getter() const;
		void name_setter(std::string str);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif