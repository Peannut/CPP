/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassFile.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:38:53 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/22 10:01:24 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLASSFILE_HPP_
# define _CLASSFILE_HPP_

#include <iostream>
#include <fstream>

class ClassFile
{
	private:
		std::ifstream _file;
		std::string _filename;
		std::string _fileContent;
		std::string _s1;
		std::string _s2;
	
	public:
		static int error(std::string str);
		int	check(void);
  		int    sed(void);
		void    linemodif(void);
		ClassFile(std::string file, std::string s1, std::string s2);
		~ClassFile();
};

#endif