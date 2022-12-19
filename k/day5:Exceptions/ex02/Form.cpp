/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:25:11 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/09 21:00:28 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _status(false), _signe_grade(42), _execute_grade(13)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _status(false), _signe_grade(sgrade), _execute_grade(egrade)
{
	if (_signe_grade < 1 || _execute_grade < 1)
		throw GradeTooHighException();
	if (_signe_grade > 150 || _execute_grade > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const& obj) : _name(obj._name), _status(obj._status), _signe_grade(obj._signe_grade), _execute_grade(obj._execute_grade)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(Form const& obj)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	_status = obj._status;
	return (*this);
}

const std::string& Form::getName() const
{
	//std::cout << "Form getName member function called" << std::endl;
	return _name;
}

const bool& Form::getStatus() const
{
	//std::cout << "Form getStatus member function called" << std::endl;
	return _status;
}

const int& Form::getSigneGrade() const
{
	//std::cout << "Form getSigneGrade member function called" << std::endl;
	return _signe_grade;
}

const int& Form::getExecuteGrade() const
{
//	std::cout << "Form getExecuteGrade member function called" << std::endl;
	return _execute_grade;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	//std::cout << "Form beSigned member function called" << std::endl;
	if (bureaucrat.getGrade() <= _signe_grade)
		_status = true;
	else
	{
		throw GradeTooLowException();
	}
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "** Form: Grade Too High Exception **";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "** Form: Grade Too Low Exception **";
}

std::ostream& operator<<(std::ostream& o, Form const& obj)
{
	std::string status;

	if (obj.getStatus())
		status = "signed";
	else
		status = "unsigned";
	o << "Form name " << obj.getName() 
	<< ", status " << status.c_str() 
	<< " ,required grades: sign " 
	<< obj.getSigneGrade() << " exec "
	<< obj.getExecuteGrade() << std::endl; 

	return o;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}