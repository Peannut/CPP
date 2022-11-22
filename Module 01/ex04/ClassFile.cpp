/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:38:56 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/22 11:37:36 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassFile.hpp"

int ClassFile::error(std::string str) {
    std::cout << str << std::endl;
    return (-1);
}

ClassFile::ClassFile(std::string file, std::string s1, std::string s2)
{
	_file.open(file);
	_filename = file;	
	_s1 = s1;
	_s2 = s2;
}

int ClassFile::check(void)
{
	if (_file.fail())
		return (ClassFile::error("File failed"));
	if (_file.peek() == std::ifstream::traits_type::eof())
		return (ClassFile::error("Empty File"));
	return (0);
}

void	ClassFile::linemodif(void)
{
	size_t first;

	first = _fileContent.find(_s1);
	if (first != SIZE_MAX)
	{
		_fileContent.erase(first, _s1.length());
		_fileContent.insert(first, _s2);
	}
	if (_fileContent.find(_s1) != SIZE_MAX)
		linemodif();
}

int	ClassFile::sed()
{
	std::ofstream newFile(_filename += ".replace");
	if (newFile.fail())
		return (ClassFile::error("File failed"));
	while(getline(_file , _fileContent))
	{
		linemodif();
		if (!_file.eof())
			newFile << _fileContent << std::endl;
		else
			newFile << _fileContent;
		
	}
	if (newFile.is_open())
		newFile.close();
	return (0);
}

ClassFile::~ClassFile()
{
	if (_file.is_open())
		_file.close();
}