/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:12:51 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/11 01:28:36 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <sstream>

int main(int argc, char **argv)
{
	/*nonfunctional execrice*/
	double tmp;
	char	c;
	if(argc != 2)
		return 0;
	std::stringstream test(argv[1]);

	test >> tmp;
	c = static_cast<char>(tmp);
	std::cout << "char value: ";
	if(tmp < CHAR_MIN || tmp > CHAR_MAX)
		std::cout << "impossible";
	else if(isprint(c))
		std::cout << c;
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
	std::cout << "int value: ";
	if(tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(tmp);
	std::cout << std::endl;
	std::isnan(5);
	std::cout << std::setprecision(1) << "flaot value: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double value: " << tmp << std::endl;
	return 0;
}