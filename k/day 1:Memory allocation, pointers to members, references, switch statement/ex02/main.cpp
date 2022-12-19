/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:03:02 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 12:30:38 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str("HI THIS BRAIN");
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "display the addresse using:" << std::endl;
	std::cout << "string: "<< &str << std::endl;
	std::cout << "pointer: " << stringPTR << std::endl;
	std::cout << "reference: "<< &stringREF << std::endl;

	std::cout << "\ndisplay the values using:" << std::endl;
	std::cout << "string: "<< str << std::endl;
	std::cout << "pointer: " << *stringPTR << std::endl;
	std::cout << "reference: "<< stringREF << std::endl;
}