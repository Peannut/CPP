/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:32:24 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/10/14 11:40:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(int ac, char **av)
{
	int	i;
	int	j;
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (j < (int)strlen(av[i]))
		{
            std::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(ac, av);		
	}
	else
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

