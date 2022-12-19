/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:24:27 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/11 01:11:27 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string const &getType( void ) const;
		void		setType(std::string type);
};

#endif