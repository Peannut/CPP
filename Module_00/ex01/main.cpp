/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:44:32 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/19 11:36:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"

int main(void)
{
	Phonebook book;
	
	while (book.input.compare("EXIT"))	
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
		std::cout << "Phonebook :" << std::endl;
		getline(std::cin, book.input);
		if (std::cin.eof ())
			exit(1);
		if (book.input.compare("ADD") == 0)
			book.contactFill();
		else if (book.input.compare("SEARCH") == 0)
			book.contactSearch();
		else if (book.input.compare("EXIT") == 0)
			std::cout << "Good BYE FRIEND" << std::endl;
	}
	return (0);
}