/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:25:09 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/24 02:56:07 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

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
		void beSigned(const Bureaucrat& bureaucrat);
		class GradeTooHighException : public std::exception
		{	public:
				const char * what() const _NOEXCEPT;};
		class GradeTooLowException : public std::exception
		{	public:
				const char * what() const throw();};
		~Form();
};

std::ostream& operator<<(std::ostream& o, Form const& obj);
#endif