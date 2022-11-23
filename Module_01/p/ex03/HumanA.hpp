/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:40:25 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 09:40:36 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
	void	attack(void);
	
	private:
	std::string _name;
	Weapon		&_weapon;
};

#endif
