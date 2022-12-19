/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:19:00 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/27 02:29:08 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int	_hit_points;
		int _energy_points;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		virtual ~ClapTrap();
};
#endif
