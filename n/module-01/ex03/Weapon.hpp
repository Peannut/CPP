/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:51:24 by marvin            #+#    #+#             */
/*   Updated: 2022/05/23 17:51:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		const std::string&	getType(void);
		void				setType(std::string type);
		Weapon(std::string type);
};

#endif /* __WEAPON_H__ */