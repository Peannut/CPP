/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:59:46 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 13:37:39 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_
#include <iostream>

class Weapon
{
	private:
    	std::string _type;

	public:
    	std::string const &getType(void);
    	void    setType(std::string const &newType);
    	Weapon(std::string const &type);
    	~Weapon();
};


#endif