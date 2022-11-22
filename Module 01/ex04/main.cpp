/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:32:51 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/22 11:38:17 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassFile.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
        return(ClassFile::error("The Program only takes three parameters in the following order: a filename and two strings, s1 and s2."));
	ClassFile file(av[1], av[2], av[3]);
	if (file.check() == -1)
		return (-1);
	if (file.sed() == -1)
		return (-1);
	return (0);
}