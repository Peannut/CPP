/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:37:28 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/06 19:20:46 by waboutzo         ###   ########.fr       */
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

int find(std::string level, std::string *name_array)
{
	for(int i = 0; i < 4; i++)
	{
		if (!level.compare(name_array[i]))
		{
			std::cout << "[ " << level.c_str() << " ] " << std::endl; 
			return	(i);
		}
	}
	return (-1);
}

void Harl::complain( std::string level )
{
	int index;

	name_array names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ref_array  actions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	index = find(level, names);
	switch (index)
	{
		case 0:
			((this->*actions[index++]))();
		case 1:
			((this->*actions[index++]))();
		case 2:
			((this->*actions[index++]))();
		case 3:
		{
			((this->*actions[index++]))();
			break;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}