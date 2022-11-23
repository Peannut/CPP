/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:41:35 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 09:41:37 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon 
{
	private:
	std::string _type;

	public:
						Weapon(std::string type);
						~Weapon(void);
	std::string const	&getType(void);
	void 				setType(std::string type);
};

#endif