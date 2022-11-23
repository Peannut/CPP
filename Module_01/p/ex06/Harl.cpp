/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:55:22 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/22 11:28:46 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout <<"I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if(levels[i] == level)
			(this->*func[i])();
	}
}

void	Harl::harlFilter(std::string str)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level = 5;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == str)
			level = i;
	}
	switch (level)
	{
		case 5:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
		default:
		{
			for(int i = level; i < 4; i++)
			{
				std::cout << "[ "<< levels[i] <<" ]" << std::endl;
				this->complain(levels[i]);
				std::cout << std::endl;
			}
		}
	}
}
