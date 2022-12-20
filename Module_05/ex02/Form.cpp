/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:33:27 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 18:08:51 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("undefined"), grade_exec(150), grade_sign(150), is_Signed(0) , target("undefined")
{
	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const std::string& _name, const int& _grade_sign, const int& _grade_exec,const std::string& _target): name(_name), 
						grade_exec(_grade_exec), grade_sign(_grade_sign), is_Signed(0), target(_target)
{
	if (_grade_exec > 150 || grade_sign > 150)
		throw GradeTooLowException();
	if (_grade_exec < 1 || grade_sign < 1)
		throw GradeTooHighException(); 
	std::cout << "Form  Constructor" << std::endl;
}

Form::Form(const Form& copy): name(copy.name), grade_exec(copy.grade_exec), grade_sign(copy.grade_sign), is_Signed(copy.is_Signed) ,target(copy.target)
{
	std::cout << "Form Copy Constructor Called" << std::endl;
}

Form& Form::operator=(Form& copy)
{
	(void)copy;
	std::cout << "Form Copy Assignment Constructor" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}


const std::string& Form::getName() const
{
	return (name);
}

const bool& Form::getIsSigned() const
{
	return (is_Signed);
}

const int& Form::getGradetoSign() const
{
	return (grade_sign);
}

const int& Form::getGradeToExec() const
{
	return (grade_exec);
}

const std::string& Form::getTarget() const
{
	return (target);
}


const char * Form::GradeTooHighException::what() const throw ()
{
	return ("Form grade too high exception");
}
const char * Form::GradeTooLowException::what() const throw ()
{
	return ("Form grade too low exception");
}


std::ostream& operator<<(std::ostream& out, Form& obj)
{
	out << "Form details: Name = " << obj.getName() << ", is_Signed = " << obj.getIsSigned()
		<< ", grade_sign = " << obj.getGradetoSign() << ", grade_exec " << obj.getGradeToExec();
	return (out);
}

void	Form::beSigned(const Bureaucrat& brcat)
{
	if (brcat.getGrade() > grade_sign)
		throw GradeTooLowException();
	is_Signed = true;
}

void	Form::execute(Bureaucrat const& executor) const
{
	try
	{
		if (!is_Signed)
			throw (std::string("Form is not Signed"));
		if (executor.getGrade() > grade_exec)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	formTask();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
