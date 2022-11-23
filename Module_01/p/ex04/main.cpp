/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:07:28 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 12:18:07 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

void	replace(char *filename, char *old, char *newStr)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		str;
	std::string		tmp;
	int				a;
	int				b;
	char			cstr[2];
	size_t			pos = 0;

	input.open(filename);
	if (input.fail())
	{
		std::cerr << "Error: can't open file" << std::endl;
		return;
	}
	while (!input.eof())
	{
		input.read(cstr, 1);
		if (input.eof())
			break;
		str = str.append(cstr);
	}
	tmp = newStr;
	a = tmp.length();
	tmp = old;
	b = tmp.length();
	tmp = filename;
	while (pos < str.length())
	{
		pos = str.find(old, pos);
		if (pos <= str.length())
		{
			str.erase(pos, b);
			str.insert(pos, newStr);
			pos += a;
		}
	}
	tmp = tmp.append(".replace");
	output.open(&tmp[0]);
	output << str;
	input.close();
	output.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return(0);
	}
	replace(argv[1], argv[2], argv[3]);
}