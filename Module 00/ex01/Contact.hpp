/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/17 19:09:19 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONCTACT_HPP_
# define _CONCTACT_HPP_

#include <string.h>
#include <iostream>
#include <iomanip> 

class Contact
{
private:
	/* data */
	std::string firstname;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string contactformat(std::string str);

public:

	Contact addContact(void);
    void    getContact(Contact contact);
    void    getcontactList(Contact contact);
    int     isEmpty(Contact contact);

};

#endif 