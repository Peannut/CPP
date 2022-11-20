/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:06:17 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/19 19:10:31 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact Contact::addContact(void) 
{

    Contact instance;

    std::cout << "First Name: ";
    getline(std::cin, instance.firstname);
    if (std::cin.eof ())
			exit(1);
    while (instance.firstname.empty())
    {
        std::cout << "we don't accept empty input sorry buddy" << std::endl;
        std::cout << "First Name: ";
        getline(std::cin, instance.firstname);
        if (std::cin.eof ())
			exit(1);
    }
    std::cout << "Last Name: ";
    getline(std::cin, instance.last_name);
    if (std::cin.eof ())
			exit(1);
	while (instance.last_name.empty())
    {
        std::cout << "we don't accept empty input sorry buddy" << std::endl;
        std::cout << "Last Name: ";
        getline(std::cin, instance.last_name);
        if (std::cin.eof ())
			exit(1);
    }
    std::cout << "Nick Name: ";
    getline(std::cin, instance.nickname);
    if (std::cin.eof ()) 
		exit(1);
    while (instance.nickname.empty())
    {
        std::cout << "we don't accept empty input sorry buddy" << std::endl;
        std::cout << "Nick Name: ";
        getline(std::cin, instance.nickname);
        if (std::cin.eof ())
			exit(1);
    }
    std::cout << "Darkest Secret: ";
    getline(std::cin, instance.darkest_secret);
    if (std::cin.eof ())
		exit(1);
    while (instance.darkest_secret.empty())
    {
        std::cout << "we don't accept empty input sorry buddy" << std::endl;
        std::cout << "Darkest Secret: ";
        getline(std::cin, instance.darkest_secret);
        if (std::cin.eof ())
		    exit(1);
    }
    std::cout << "Phone number: ";
    getline(std::cin, instance.phone_number);
    if (std::cin.eof ())
	    exit(1);
    while (instance.phone_number.length() != 10)
    {
        std::cout << "Phone number must be 10 digits" << std::endl;
        std::cout << "Phone number: ";
        getline(std::cin, instance.phone_number);
        if (std::cin.eof ())
	         exit(1);
    }
    return (instance);
}

std::string Contact::contactformat (std::string str)
{
    std::cout << std::setw(10);
    if (str.length() > 10)
        str.replace(9, str.length() - 9, ".");
    return (str);
}

void    Contact::getcontactList(Contact contact) 
{
    std::cout << contactformat(contact.firstname);
    std::cout << "|";
    std::cout << contactformat(contact.last_name);
    std::cout << "|";
    std::cout << contactformat(contact.nickname);
    std::cout << "|";
    std::cout << std::endl;
}

void    Contact::getfullcontact(Contact contact)
{
    std::cout << "First Name: "<< contact.firstname << std::endl;
    std::cout << "Last Name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Dark Secret: " << contact.darkest_secret << std::endl;
    std::cout << "Phone Number: " << contact.phone_number << std::endl;

}

int Contact::isEmpty(Contact contact)
{
    return (contact.firstname.empty());
}