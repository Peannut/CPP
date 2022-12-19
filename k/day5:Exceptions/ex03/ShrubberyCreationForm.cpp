/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:55:13 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/07 17:34:33 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137), _target("form")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137), _target(target) 
{
	std::cout << "ShrubberyCreationForm target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& obj)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	Form::operator=(obj);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream outfile;
	if ((executor.getGrade() <= this->getExecuteGrade())
		&& this->getStatus())
	{
		outfile.open(_target + "_shrubbery", std::fstream::out | std::fstream::trunc);
		outfile << "      /\\" << std::endl;
		outfile << "     //\\\\" << std::endl;
		outfile << "    ///\\\\\\" << std::endl;
		outfile << "   ////\\\\\\\\" << std::endl;
		outfile << "  /////\\\\\\\\\\     /\\		" << std::endl;
		outfile << " //////\\\\\\\\\\\\   //\\\\	" << std::endl;
		outfile << "///////\\\\\\\\\\\\\\ ///\\\\\\	"<< std::endl;
		outfile << "      ||         ||    		" << std::endl;
		outfile.close();
	}
	else
	{
		throw (GradeTooLowException());
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}