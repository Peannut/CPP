/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:19:48 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 22:54:47 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup" 
	<< "burger. I really do!" << std::endl;	
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t" 
	<< "be asking for more!" << std::endl;	
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." 
	<< "I’ve been coming for years whereas you started working here since "
	<< "last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain( std::string level )
{
	name_array names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ref_array  actions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i=0; i < 4; i++)
	{
		if (!level.compare(names[i]))
		{
			((this->*actions[i]))();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
