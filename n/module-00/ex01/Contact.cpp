/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:11:16 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/26 12:23:38 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string	input_field(const std::string prompt)
{
	std::string field;
	while (!std::cin.eof())
	{
		std::cout << prompt;
		std::getline(std::cin, field);
		if (!field.empty())
			return (field);
		std::cout << "cant't have empty field" << std::endl;
	}
	return ("");
}

void	Contact::insertInfos()
{
	this->first_name = input_field("first name: ");
	this->last_name = input_field("last name: ");
	this->nickname = input_field("nickname: ");
	this->phone_number = input_field("phone number: ");
	this->darkest_secret = input_field("darkest secret: ");
}

std::string Contact::getFirstName() const
{
	return (this->first_name);
}

std::string Contact::getLastName() const
{
	return (this->last_name);
}

std::string Contact::getNickName() const
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkest_secret);
}