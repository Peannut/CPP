/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:03:11 by marvin            #+#    #+#             */
/*   Updated: 2022/05/25 17:03:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replaceThisWithThat(std::string filename, std::string before, std::string after)
{
	std::ifstream	infile(filename.data());
	std::ofstream	outfile(filename.append(".replace").data());
	std::string		line;
	size_t			pos = 0;

	if (!infile.is_open() || !outfile.is_open())
	{
		std::cerr << "can't open this file" << std::endl;
		return (1);
	}
	while (std::getline(infile, line))
	{
		pos = 0;
		while ((pos = line.find(before, pos)) != std::string::npos)
		{
			line.erase(pos, before.size());
			line.insert(pos, after);
			pos += after.size();
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}
	return (0);
}

int main(int c, char **v)
{
	if (c != 4)
	{
		std::cerr << "Invalid Arguments" << std::endl;
		return (1);
	}
	if(replaceThisWithThat(v[1], v[2], v[3]))
		return (1);
	return (0);
}