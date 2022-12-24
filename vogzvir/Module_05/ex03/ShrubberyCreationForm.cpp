/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 08:54:04 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 17:49:59 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, "undefined")
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy): Form(copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy)
{
	(void)copy;
	std::cout << "ShrubberyCreationForm Copy Assignment Constructor" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

void	ShrubberyCreationForm::formTask() const
{
	std::ofstream outfile(getTarget() + "_shrubbery");

	outfile<< "	     ,@@@@@@@,                     \
	\n       ,,,.   ,@@@@@@/@@,  .oo8888o.         \
	\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\'88/8o       \
	\n   ,%&\'%&&%&&%,@@@\'@@@/@@@88\'88888/88'   \
	\n   %&&%&%&/%&&%@@\'@@/ /@@@88888\'88888'    \
	\n   %&&%/ %&%%&&@@\' V /@@' `88\'8 `/88'     \
	\n   `&%\' ` /%&'    |.|        \' '|8'       \
	\n       |o|        | |         | |          \
	\n       |.|        | |         | |          \
	\n	  \\/ ._\'//_/__/  ,\'_//__\\/.  \'_//__/_ ";

}
