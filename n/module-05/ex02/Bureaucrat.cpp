/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:50:29 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/19 11:38:40 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Random Bureaucrat"), _grade(150)
{
	std::cout << "[ Bureaucrat Default Constructor ]" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
	std::cout << "[ Bureaucrat Constructor ]" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << "[ Bureaucrat Copy Constructor ]" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	(void)copy;
	std::cout << "[ Bureaucrat Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[ Bureaucrat Destructor ]" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
	return (_name);
}

const int& Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::gradeUp()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::gradeDown()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("Grade is Too High");
}
const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("Grade is Too Low");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (out);
}