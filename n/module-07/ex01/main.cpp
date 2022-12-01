/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:50:12 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/23 18:56:36 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printUpper(int c)
{
	if (std::islower(c))
		std::cout << static_cast<char>(toupper(c));
	else
		std::cout << static_cast<char>(c);
}

void	addOne(int& i)
{
	i++;
}

int main(void)
{
	std::string word = "Life, is very: cool";
	iter(word.data(), word.size(), printUpper);
	std::cout << std::endl;
	
	
	int	nums[4] = {9, 10, 100, 12};
	iter<int, int, void(*)(int&)>(nums, 4, addOne);
	for (int i = 0; i < 4; i++)
		std::cout << nums[i] << '\t';
	std::cout << std::endl;

	return (0);
}