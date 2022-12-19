/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:10:17 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/15 12:08:24 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif