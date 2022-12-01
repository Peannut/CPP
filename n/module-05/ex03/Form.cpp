/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:55:33 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 11:41:57 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("N/A"), _grade_to_exec(150), _grade_to_sign(150), _is_signed(0), _target("N/A")
{
	std::cout << "[ Form Default Constructor ]" << std::endl;
}

Form::Form(const std::string& name, const int& grade_to_sign,
			const int& grade_to_exec, const std::string& target):
			_name(name), _grade_to_exec(grade_to_exec),
			_grade_to_sign(grade_to_sign), _is_signed(0), _target(target)
{
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	if (grade_to_exec < 0 || grade_to_sign < 0)
		throw GradeTooHighException();
	std::cout << "[ Form Default Constructor ]" << std::endl;
}

Form::Form(const Form& copy): _name(copy._name), _grade_to_exec(copy._grade_to_exec), _grade_to_sign(copy._grade_to_sign), _is_signed(copy._is_signed), _target(copy._target)
{
	std::cout << "[ Form Copy Constructor ]" << std::endl;
}

Form& Form::operator=(const Form& copy)
{
	(void)copy;
	std::cout << "[ Form Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "[ Form Destructor ]" << std::endl;
}

const std::string& Form::getName() const
{
	return (_name);
}

const bool& Form::getIsSigned() const
{
	return (_is_signed);
}

const int& Form::getGradetoSign() const
{
	return (_grade_to_sign);
}

const int& Form::getGradeToExec() const
{
	return (_grade_to_exec);
}

const std::string& Form::getTarget() const
{
	return (_target);
}

void	Form::beSigned(const Bureaucrat& brcrat)
{
	if (brcrat.getGrade() > _grade_to_sign)
		throw GradeTooLowException();
	if (_is_signed)
		std::cout << "Form is already signed" << std::endl;
	else
		_is_signed = 1;
}

void	Form::execute(Bureaucrat const& executor) const
{
	try
	{
		if (!_is_signed)
			throw (std::string("Form is not Signed"));
		if (executor.getGrade() > _grade_to_exec)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch(const std::string& error)
	{
		std::cerr << error << std::endl;
		return ;
	}
	formTask();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}

const char * Form::GradeTooHighException::what() const throw ()
{
	return ("Grade Is Too High");
}
const char * Form::GradeTooLowException::what() const throw ()
{
	return ("Grade Is Too Low");
}

std::ostream& operator<<(std::ostream& out, Form& obj)
{
	out << "Form: Name = " << obj.getName()
		<< ", is_signed = " << obj.getIsSigned()
		<< ", grade_to_sign = " << obj.getGradetoSign()
		<< ", grade_to_exec " << obj.getGradeToExec();
	return (out);
}
