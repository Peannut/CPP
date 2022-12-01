/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:28:02 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/20 13:07:08 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include "Contact.hpp"

# define ADD "ADD - to add a new contact.\n"
# define SEARCH "SEARCH - to search for a contact.\n"
# define EXIT "EXIT - to exit the program.\n"

class PhoneBook
{
	private:
		Contact	contacts[8];
		size_t	available_contacts;
		size_t	current_contact;

	public:
		PhoneBook(void);
		void	addCommand(void);
		void	searchCommand(void);
		void	displayTable(void);
};

#endif