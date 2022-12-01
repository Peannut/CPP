/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:15:38 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/18 15:13:16 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int c, char **v)
{
	int j;

	if (c < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < c; i++)
	{
		for (j = 0; v[i][j]; j++)
		{
			if (v[i][j] >= 'a' && v[i][j] <= 'z')
				std::cout << (char)toupper(v[i][j]);
			else
				std::cout << v[i][j];
		}
		
	}
	std::cout << std::endl;
	return (0);
}