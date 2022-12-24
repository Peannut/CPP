/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:27:22 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/22 16:40:13 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int	isInt(std::string check)
{
	for(int i = 0;check[i]; i++)
	{
		if (i == 0 && (check[i] == '-' || check[i] == '+'))
			continue;
		if (!std::isdigit(check[i]))
			return (0);
	}
	return (1);
}

int	isCharacter(std::string check)
{
	if (check.size() == 1)
	{
		return (1);
	}
	return (0);
}

int	isFloating_point(std::string check, info& data)
{
	bool p = false;

	for(size_t i = 0; i + 1 < check.size() ; i++)
	{
		if (i == 0 && (check[i] == '-' || check[i] == '+'))
			continue;
		if ((!std::isdigit(check[i]) && check[i] != '.') || check.back() != 'f')
		{
			return (0);
		}
		if (check[i] == '.')
		{
			if (p)
				return (0);
			p = true;
		}
		if (p)
			data.after_point++;
	}
	return (1);
}

int	isDouble(std::string check, info& data)
{
	bool p = false;

	for(int i = 0; check[i]; i++)
	{
		if (i == 0 && (check[i] == '-' || check[i] == '+'))
			continue;
		if ((!std::isdigit(check[i]) && check[i] != '.'))
			return (0);
		if (check[i] == '.')
		{
			if (p)
				return (0);
			p = true;
		}
		if (p)
			data.after_point++;
	}
	return (1);
}
void	typefind(info& dta, char **av)
{
	if (isInt(av[1]))
	{
		dta.int_number = std::atoi(av[1]);
		dta.type = ISINTEGER;
	}
	else if (isCharacter(av[1]))
	{
		dta.character = *av[1];
		dta.type = ISCHARACTER;
	}
	else if (isFloating_point(av[1], dta))
	{
		dta.float_number = std::atof(av[1]);
		dta.type = ISFLOAT;
	}
	else if (isDouble(av[1], dta))
	{
		dta.double_number = std::atof(av[1]);
		dta.type = ISDOUBLE;
	}
	else
		dta.type = ISUNDEFINED;
}

void	type_conversion(info& info)
{
	if (info.type == ISFLOAT)
	{
		info.int_number = static_cast<int>(info.float_number);
		info.character = static_cast<char>(info.float_number);
		info.double_number = static_cast<double>(info.float_number);
	}
	else if (info.type == ISDOUBLE)
	{
		info.int_number = static_cast<int>(info.double_number);
		info.character = static_cast<char>(info.double_number);
		info.float_number = static_cast<float>(info.double_number);
	}
	else if (info.type == ISCHARACTER)
	{
		info.int_number = static_cast<int>(info.character);
		info.float_number = static_cast<float>(info.character);
		info.double_number = static_cast<double>(info.character);
	} 
	else if (info.type == ISINTEGER)
	{
		info.float_number = static_cast<float>(info.int_number);
		info.double_number = static_cast<double>(info.int_number);
		info.character = static_cast<char>(info.int_number);
	}
}

void printcharacter(info& data)
{
	std::cout << "char: ";
	if (data.type == ISUNDEFINED || (data.int_number > 127 && data.int_number < 0))
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(data.character))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << data.character << '\'' << std::endl;
}

void print_int(info& data)
{
	std::cout << "int: ";
	if (data.type == ISUNDEFINED)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << data.int_number << std::endl;
}

void print_float(info& data)
{
	std::cout << "float: ";
	if (data.type == ISUNDEFINED)
		std::cout << "nanf" << std::endl;
	else if (data.float_number == data.int_number)
		std::cout << data.float_number << ".0f" << std::endl;
	else if (data.after_point > 5)
	{
		if (data.float_number < 0)
			std::cout << "-inff" << std::endl;
		else
			std::cout << "+inff" << std::endl;
	}
	else
		std::cout << data.float_number << "f" << std::endl;
}

void print_double(info& data)
{
	std::cout << "double: ";
	if (data.type == ISUNDEFINED)
		std::cout << "nan" << std::endl;
	else if (data.double_number == data.int_number)
		std::cout << data.double_number << ".0" << std::endl;
	else if (data.after_point > 5)
	{
		if (data.double_number < 0)
			std::cout << "-inf" << std::endl;
		else
			std::cout << "+inf" << std::endl;
	}
	else
		std::cout << data.double_number << std::endl;
}


int main(int ac, char **av)
{
	info data;

	if (ac != 2)
	{
		std::cerr << "invalid arguments" << std::endl;
		return (1);
	}
	typefind(data, av);
	type_conversion(data);

	printcharacter(data);
	print_int(data);
	print_float(data);
	print_double(data);
}