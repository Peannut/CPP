/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:04:47 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/13 16:08:48 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ctype.h>

class Contact
{
	private:
		int		index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();
		int		index_getter(void) const;
		void	index_setter(int index);
		std::string fname_getter(int flag) const;
		void	fname_setter(std::string fname);
		std::string lname_getter(int flag) const;
		void	lname_setter(std::string lname);
		std::string	phone_number_getter(int flag) const;
		void	phone_number_setter(std::string num);
		std::string nickname_getter(int flag) const;
		void nickname_setter(std::string str);
		std::string darkest_secret_getter(int flag) const;
		void darkest_secret_setter(std::string str);
};

#endif
