/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:54:44 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/17 15:45:13 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string& strInput, std::string sfind, std::string sreplace)
{
	size_t findx;
	int len;
	int start;

	len = strInput.length();
	start = 0;
	while(start < len)
	{
		findx = strInput.find(sfind, start);
		if (findx == std::string::npos)
			break;
		strInput.erase(findx, sfind.length());
		strInput.insert(findx, sreplace);
		len = strInput.length();
		start = findx + sreplace.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "bad argument!" << std::endl;
	else
	{
		std::string sfind = argv[2];
		std::string sreplace = argv[3];
		std::string output = argv[1];
		output += ".replace";
		std::ifstream inf(argv[1]);
		std::ofstream outfile;
		if (!sfind.compare(""))
			return (1);
		if (!inf)
		{
			std::cerr << "Uh oh, "<< argv[1] << " could not be opened for reading!" << std::endl;
			return (1);
		}
		outfile.open(output, std::fstream::out | std::fstream::trunc);
		while(inf)
		{
			std::string strInput;
			getline(inf, strInput);
			replace(strInput, sfind, sreplace);
			if (strInput.length())
				outfile << strInput << "\n";
		}
		outfile.close();
	}
	return (0);
}