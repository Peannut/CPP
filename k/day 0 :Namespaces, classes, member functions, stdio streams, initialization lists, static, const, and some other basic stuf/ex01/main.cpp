/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:56:38 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/19 17:37:38 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_isdigit(std::string str, int flag)
{
	int i;

	i = 0;
	if (str[0] == '+' && flag == 0)
		i++;
	if (!str[i])
		return (0);
	do
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	} while (str[i]);
	return (1);
}

int	ft_getline(std::string *str, const std::string message)
{
	if (std::cin.eof())
		return (1);
	std::cout << message;
	getline(std::cin, *str);
	if (std::cin.eof())
		return (1);
	while (!(*str).length())
	{
		std::cerr << "\033[1;31mthis field is required !!!\033[0m" << std::endl;
		std::cout << message;
		getline(std::cin, *str);
		if (std::cin.eof())
			return (1);
	}
	return (0);
}
int main(void)
{
	PhoneBook	phonebook;
	std::string	str;

	while(1)
	{
		if(std::cin.eof() || ft_getline(&str,"enter command: "))
		{
			std::cin.clear();
  			std::cin.ignore(1024, '\n');
			break;
		}
		if (!str.compare("ADD"))
			phonebook.add_contact();
		else if (!str.compare("EXIT"))
			break;
		else if (!str.compare("SEARCH"))
		{
			if (phonebook.display_contacts() && !ft_getline(&str,"enter contact index: "))
			{
				if(ft_isdigit(str, 1))
					phonebook.get_contact(stoi(str));
				else
					std::cerr << "invalid conctact" << std::endl;
			}
		}
		else
			std::cerr << "\033[1;31mInvalid command!!\033[0m" << std::endl;
		std::cout << "\n***************************************\n" << std::endl;
	}
	std::cout << "\nQuit" << std::endl;
	return (0);
}
