/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:11:53 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/30 16:05:21 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack(void);
};

#endif