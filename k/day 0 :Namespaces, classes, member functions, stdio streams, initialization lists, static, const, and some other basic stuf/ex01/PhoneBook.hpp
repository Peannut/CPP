/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:04:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/19 17:38:23 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
//#include <ctype.h>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		Contact	c[8];
	public:
		PhoneBook();
		void add_contact( void );
		int display_contacts( void );
		void get_contact(int id);
};

int ft_isdigit(std::string str, int flag);
int	ft_getline(std::string *str, const std::string message);
#endif
