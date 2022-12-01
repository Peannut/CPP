/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:27:59 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/20 10:38:27 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->available_contacts = 0;
	this->current_contact = 0;
}

void	PhoneBook::addCommand(void)
{
	this->contacts[current_contact].insertInfos();
	this->current_contact = (this->current_contact + 1) % 8;
	if (this->available_contacts < 8)
		this->available_contacts++;
	std::cout << "Contact has been saved successfully !!\n-> ";
}

static std::string add_space_dot(std::string field)
{
	if (field.size() > 10)
		return (field.substr(0, 9) + ".");
	return field;
}

void	PhoneBook::displayTable(void)
{
	std::cout << std::left << std::setfill('-')
		<< std::setw(48) << "-" << std::endl << std::setfill(' ')
		<< std::setw(10) << "index" << " | "
		<< std::setw(10) << "first name" << " | "
		<< std::setw(10) << "last name" << " | "
		<< std::setw(10) << "nickname" << std::endl
		<< std::setfill('-') << std::setw(48) << "-" << std::endl;
	for (size_t i = 0; i < this->available_contacts; i++)
	{
		std::cout << std::left << std::setfill(' ') << std::setw(10) << i + 1
			<< " | " << std::setw(10) << add_space_dot(this->contacts[i].getFirstName())
			<< " | " << std::setw(10) << add_space_dot(this->contacts[i].getLastName())
			<< " | " << std::setw(10) << add_space_dot(this->contacts[i].getNickName())
			<< std::endl;
	}
}

void	PhoneBook::searchCommand(void)
{
	size_t insert = 0;
	
	this->displayTable();
	while (!std::cin.eof())
	{
		std::cout << "index: ";
		if(!(std::cin >> insert))
		{
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			std::cout << "Error: Only Positive Numbers are Allowed\n" << std::endl;
			std::cout << ADD << SEARCH << EXIT << "-> ";
			return ;
		}
		else if (insert > 0 && insert <= this->available_contacts)
			break ;
		std::cout << "Error: Invalid Index" << std::endl;
	}
	if (!std::cin.eof())
	{
		std::cout << "first name: " << this->contacts[insert - 1].getFirstName() << std::endl;
		std::cout << "last name: " << this->contacts[insert - 1].getLastName() << std::endl;
		std::cout << "nickname: " << this->contacts[insert - 1].getNickName() << std::endl;
		std::cout << "phone number: " << this->contacts[insert - 1].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << this->contacts[insert - 1].getDarkestSecret() << std::endl;
	}
}