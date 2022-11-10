/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:06:17 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/09 20:24:33 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->firstname = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->favorite_meal = "";
	this->darkest_secret = "";
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getfirst_name(void)
{
	return (this->firstname);
}
std::string	Contact::getlast_name(void)
{
	return (this->last_name);
}
std::string	Contact::getnickname(void)
{
	return (this->nickname);
}
std::string	Contact::getphonenumber(void)
{
	return (this->phone_number);
}
std::string	Contact::getfav_meal(void)
{
	return (this->favorite_meal);
}
std::string	Contact::getdarkest_secret(void)
{
	return (this->darkest_secret);
}