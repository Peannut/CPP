/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:26:54 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/12 10:46:15 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	std::cout << "-------------------------------------\n"
	<< "| Welcome to our phonebook software |\n"
	<< "-------------------------------------\n"
	<< "available commands:\n"
	<< "ADD     : save a new contact\n"
	<< "SEARCH	: display a specific contact\n"
	<< "EXIT	: Quit the program\n" << std::endl;
}

void PhoneBook::add_contact()
{
	std::string str;

	if(!ft_getline(&str, "Enter contact first name: " ))
	{
		c[index % 8].fname_setter(str);
		if(!ft_getline(&str, "Enter contact last name: "))
		{
			c[index % 8].lname_setter(str);
			if(!ft_getline(&str, "Enter contact nickname: "))
			{
				c[index % 8].nickname_setter(str);
				if(!ft_getline(&str, "Enter contact phone number: "))
				{
					while (!ft_isdigit(str, 0))
					{
						std::cerr << "is not a number, try again!!" << std::endl;
						std::cout << "Enter contact phone number: ";
						getline(std::cin, str);
						if (std::cin.eof())
							return ;
					}
					c[index % 8].phone_number_setter(str);
					if(!ft_getline(&str, "Enter contact darkest secret: "))
						c[index % 8].darkest_secret_setter(str);
				}
			}
		}
	}
	index++;
}

void PhoneBook::get_contact(int id)
{
	int size;

	size = ((index < 8) * (index)) + ((index >= 8) * 8);
	if (id >= size)
		std::cerr << "invalid conctact" << std::endl;
	else
	{
		std::cout << "[contact info]\n"
		<< "index			: " << id << "\n"
		<< "first name		: " << c[id].fname_getter(1) << "\n"
		<< "last name		: " << c[id].lname_getter(1) << "\n"
		<< "nickname        : " << c[id].nickname_getter(1) << "\n"
		<< "phone number    : " << c[id].phone_number_getter(1) << "\n"
		<< "darkest secret  : " << c[id].darkest_secret_getter(1) << "\n"
		<< std::endl;
	}
}

int	PhoneBook::display_contacts()
{
	int size;

	if (index == 0)
	{
		std::cout << "Vide list try to add something -_-!!" << std::endl;
		return 0;
	}
	size = ((index < 8) * index) + ((index >= 8) * 8);
	std::cout << std::setw(10) << std::left << "index" << std::left
	<< "|" << std::setw(10) << std::left << "first name" << std::left
	<< "|" << std::setw(10) << std::left << "last name" << std::left
	<< "|" << std::setw(10) << std::left << "nickname" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << std::left << i
		<< "|" << std::setw(10) << std::left << c[i].fname_getter(0) 
		<< "|" << std::setw(10) << std::left <<  c[i].lname_getter(0) 
		<< "|" << std::setw(10) << std::left <<  c[i].nickname_getter(0)
		<< std::endl;
	}
	return 1;
}
