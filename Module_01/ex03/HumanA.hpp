/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:00:31 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/21 14:24:13 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

# include "Weapon.hpp"

class HumanA
{
	private:
    	std::string _name;
    	Weapon &_weapon;
    
	public:
    	void attack();
    	HumanA(const std::string &name, Weapon &weapon);
    	~HumanA();
};

#endif