/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:14:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/26 18:19:16 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const FragTrap& obj);
		void attack(const std::string& target);
		DiamondTrap& operator=(const DiamondTrap& obj);
		void whoAmI();
		~DiamondTrap();
};

#endif