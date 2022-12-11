/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:11:56 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/11 15:26:35 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_
#include <iostream>



class ClapTrap
{
	private:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_atttackDamage;
		
	public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif