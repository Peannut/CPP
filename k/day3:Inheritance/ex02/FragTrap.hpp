/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:15:24 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/25 17:43:21 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap& operator=(const FragTrap& obj);
		void highFivesGuys(void);
		~FragTrap();
};

#endif