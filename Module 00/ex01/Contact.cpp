/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:06:17 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/17 12:51:50 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact Contact::addContact(void) 
{

    Contact instance;

    std::cout << "First Name: ";
    getline(std::cin, instance.firstname);

    std::cout << "Last Name: ";
    getline(std::cin, instance.last_name);
	
    std::cout << "Nick Name: ";
    getline(std::cin, instance.nickname);

    std::cout << "Darkest Secret: ";
    getline(std::cin, instance.darkest_secret);

    std::cout << "Phone number: ";
    getline(std::cin, instance.phone_number);

    return (instance);
}

std::string Contact::formatContact (std::string str)
{
    std::cout << std::setw(10);
    if (str.length() > 10)
        str.replace(9, str.length() - 9, ".");
    return (str);    
}

void    Contact::getcontactList(Contact contact) 
{
    
}