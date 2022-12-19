/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:25:09 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/09 21:02:37 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool _status;
		const int _signe_grade;
		const int _execute_grade;
	public:
		Form();
		Form(Form const& obj);
		Form(std::string name, int sgrade, int egrade);
		Form& operator=(Form const& obj);
		const std::string& getName() const;
		const bool& getStatus() const;
		const int& getSigneGrade() const;
		const int& getExecuteGrade() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		void beSigned(const Bureaucrat& bureaucrat);
		class GradeTooHighException : public std::exception
		{	public:
				const char * what() const throw();};
		class GradeTooLowException : public std::exception
		{	public:
				const char * what() const throw();};
		virtual ~Form();
};

std::ostream& operator<<(std::ostream& o, Form const& obj);

#endif