/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:23:29 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/21 10:56:23 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("peanut"), grade(150)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}


Bureaucrat::Bureaucrat(Bureaucrat& copy): name(copy.name), grade(copy.grade)
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name)
{
	if (_grade > 150)
		throw  GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
	grade = _grade;
	std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& copy)
{
	grade = copy.grade;
	std::cout << "Bureaucrat Copy Assignment Constructor" << std::endl;
	return (*this);
}

const std::string& Bureaucrat::getName() const
{
	return (name);
}

const int& Bureaucrat::getGrade() const 
{
	return (grade);
}

std::ostream& operator<<(std::ostream& out , Bureaucrat& obj)
{
	out << obj.getName() << "Bureaucrat grade" << obj.getGrade() << std::endl;
	return (out);
}

void	Bureaucrat::garadeIncrement()
{
	std::cout << "Bureaucrat garadeIncrement called" << std::endl;
	--grade;
	if (grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::gradeDecrement()
{
	std::cout << "Bureaucrat DecrementGrade called" << std::endl;
	grade++;
	if (grade > 150)
		throw(GradeTooLowException());
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high exception.";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade low exception.";
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
void	Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed Form: " << form.getName() << " successfully." << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->name << " was not able to execute Form: " << form.getName()
		<< " because: "<< e.what() << std::endl;
	}
	catch(const std::string& error)
	{
		std::cerr << error << std::endl;
	}
}