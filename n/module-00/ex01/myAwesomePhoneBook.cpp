/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:14:24 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/20 10:38:13 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	user_input;

	std::cout << ADD << SEARCH << EXIT << "-> ";
	while (!std::cin.eof())
	{
		std::getline(std::cin, user_input);
		if (user_input == "EXIT")
			break ;
		else if (user_input == "ADD")
			phonebook.addCommand();
		else if (user_input == "SEARCH")
			phonebook.searchCommand();
		else if (!std::cin.eof())
			std::cout << "-> ";
	}
	return (0);
}