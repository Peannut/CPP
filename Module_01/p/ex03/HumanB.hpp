/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:40:57 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 09:41:03 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
	std::string _name;
	Weapon		*_weapon;

	public:
			HumanB(std::string name);
			~HumanB(void);
	void 	setWeapon(Weapon &weapon);
	void	attack(void);
};
#endif