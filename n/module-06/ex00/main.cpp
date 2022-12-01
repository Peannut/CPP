/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:56:54 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/23 14:34:23 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataCast.hpp"

void printChar(DataCast& data)
{
	std::cout << "char: ";
	if (data.type == IS_UNDEFINED || (data.inum >= 255 && data.inum < 0))
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(data.cnum))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << data.cnum << '\'' << std::endl;
}

void printInt(DataCast& data)
{
	std::cout << "int: ";
	if (data.type == IS_UNDEFINED)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << data.inum << std::endl;
}

void printFloat(DataCast& data)
{
	std::cout << "float: ";
	if (data.type == IS_UNDEFINED)
		std::cout << "nanf" << std::endl;
	else if (data.fnum == data.inum)
		std::cout << data.fnum << ".0f" << std::endl;
	else if (data.after_point > 5)
	{
		if (data.fnum < 0)
			std::cout << "-inff" << std::endl;
		else
			std::cout << "+inff" << std::endl;
	}
	else
		std::cout << data.fnum << "f" << std::endl;
}

void printDouble(DataCast& data)
{
	std::cout << "double: ";
	if (data.type == IS_UNDEFINED)
		std::cout << "nan" << std::endl;
	else if (data.dnum == data.inum)
		std::cout << data.dnum << ".0" << std::endl;
	else if (data.after_point > 5)
	{
		if (data.dnum < 0)
			std::cout << "-inf" << std::endl;
		else
			std::cout << "+inf" << std::endl;
	}
	else
		std::cout << data.dnum << std::endl;
}

int	isInt(std::string data)
{
	for (int i = 0; data[i]; i++)
	{
		if (i == 0 && (data[i] == '-' || data[i] == '+'))
			continue;
		if (!std::isdigit(data[i]))
			return (0);
	}
	return (1);
}

int	isChar(std::string data)
{
	if (data.size() == 1)
		return (1);
	return (0);
}

int	isFloat(std::string data, DataCast& sData)
{
	bool point = false;
	
	for (size_t i = 0; i + 1 < data.size(); i++)
	{
		if (i == 0 && (data[i] == '-' || data[i] == '+'))
			continue;
		if ((!std::isdigit(data[i]) && data[i] != '.') || data.back() != 'f')
			return (0);
		if (data[i] == '.')
		{
			if (point)
				return (0);
			point = true;
		}
		if (point)
			sData.after_point++;
	}
	return (1);
}

int	isDouble(std::string data, DataCast& sData)
{
	bool point = false;
	
	for (int i = 0; data[i]; i++)
	{
		if (i == 0 && (data[i] == '-' || data[i] == '+'))
			continue;
		if ((!std::isdigit(data[i]) && data[i] != '.'))
			return (0);
		if (data[i] == '.')
		{
			if (point)
				return (0);
			point = true;
		}
		if (point)
			sData.after_point++;
	}
	return (1);
}

void	find_type(DataCast& data, char **v)
{
	if (isInt(v[1]))
	{
		data.inum = std::atoi(v[1]);
		data.type = IS_INT;
	}
	else if (isChar(v[1]))
	{
		data.cnum = *v[1];
		data.type = IS_CHAR;
	}
	else if (isFloat(v[1], data))
	{
		data.fnum = std::atof(v[1]);
		data.type = IS_FLOAT;
	}
	else if (isDouble(v[1], data))
	{
		data.dnum = std::atof(v[1]);
		data.type = IS_DOUBLE;
	}
	else
		data.type = IS_UNDEFINED;
}

void	type_cast(DataCast& data)
{
	if (data.type == IS_CHAR)
	{
		data.inum = static_cast<int>(data.cnum);
		data.fnum = static_cast<float>(data.cnum);
		data.dnum = static_cast<double>(data.cnum);
	}
	else if (data.type == IS_INT)
	{
		data.cnum = static_cast<char>(data.inum);
		data.fnum = static_cast<float>(data.inum);
		data.dnum = static_cast<double>(data.inum);
	}
	else if (data.type == IS_FLOAT)
	{
		data.inum = static_cast<int>(data.fnum);
		data.cnum = static_cast<char>(data.fnum);
		data.dnum = static_cast<double>(data.fnum);
	}
	else if (data.type == IS_DOUBLE)
	{
		data.inum = static_cast<int>(data.dnum);
		data.cnum = static_cast<char>(data.dnum);
		data.fnum = static_cast<float>(data.dnum);
	}
}

int main(int c, char **v)
{
	DataCast data;
	
	if (c != 2)
	{
		std::cerr << "arguments are invalid" << std::endl;
		return (1);
	}
	find_type(data, v);
	type_cast(data);
	
	printChar(data);
	printInt(data);
	printFloat(data);
	printDouble(data);
}