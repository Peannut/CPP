/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:40:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/13 16:09:19 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	//std::cout << "default contact constructor\n" << std::endl;
}

int Contact::index_getter() const
{
	return index;
}

void Contact::index_setter(int ids)
{
	index = ids;
}

std::string Contact::phone_number_getter(int flag) const
{
	std::string saver;

	saver = phone_number;
 	if (flag == 0 && phone_number.length() > 10)
	{
		saver = phone_number.substr(0, 9);
		saver += '.';
	}
	return saver;
}

void Contact::phone_number_setter(std::string num)
{
	phone_number = num;
}

std::string Contact::fname_getter(int flag) const
{
	std::string saver;

	saver = first_name;
 	if (flag == 0 && first_name.length() > 10)
	{
		saver = first_name.substr(0, 9);
		saver += '.';
	}
	return saver;
}

void Contact::fname_setter(std::string str)
{
	first_name = str;
}

std::string Contact::lname_getter(int flag) const
{
	std::string saver;

	saver = last_name;
 	if (flag == 0 && last_name.length() > 10)
	{
		saver = last_name.substr(0, 9);
		saver += '.';
	}
	return saver;
}

void Contact::lname_setter(std::string str)
{
	last_name = str;
}

std::string Contact::nickname_getter(int flag) const
{
	std::string saver;

	saver = nickname;
 	if (flag == 0 && nickname.length() > 10)
	{
		saver = nickname.substr(0, 9);
		saver += '.';
	}
	return saver;
}

void Contact::nickname_setter(std::string str)
{
	nickname = str;
}

std::string Contact::darkest_secret_getter(int flag) const
{
	std::string saver;

	saver = darkest_secret;
 	if (flag == 0 && darkest_secret.length() > 10)
	{
		saver = darkest_secret.substr(0, 9);
		saver += '.';
	}
	return saver;
}

void Contact::darkest_secret_setter(std::string str)
{
	darkest_secret = str;
}
