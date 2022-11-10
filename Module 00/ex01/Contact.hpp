/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/09 20:26:07 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONCTACT_HPP_
# define _CONCTACT_HPP_

#include <string.h>
#include <iostream>

class Contact
{
private:
	/* data */
	std::string firstname;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string favorite_meal;
	std::string darkest_secret;


public:
	Contact(void);
	~Contact();
	std::string	Contact::getfirst_name(void);
	std::string	Contact::getlast_name(void);
	std::string	Contact::getnickname(void);
	std::string	Contact::getphonenumber(void);
	std::string	Contact::getfav_meal(void);
	std::string	Contact::getdarkest_secret(void);

};

#endif 