/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:27:02 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/09 21:01:27 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const& name, const int& grade);
		Bureaucrat(Bureaucrat const& obj);
		Bureaucrat& operator=(Bureaucrat const& obj);
		const std::string& getName() const;
		const int& getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		void signForm(Form const& form);
		class GradeTooHighException : public std::exception
		{	public:
				const char * what() const throw();};
		class GradeTooLowException : public std::exception
		{	public:
				const char * what() const throw();};
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream const& o, Bureaucrat const& obj);

#endif