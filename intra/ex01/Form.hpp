/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:33:23 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 16:17:06 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string name;
		const int grade_exec;
		const int grade_sign;
		bool is_Signed;
	public:
		Form();
		Form(const std::string& _name, const int& _grade_sign, const int& _grade_exec);
		Form(const Form&);
		Form& operator=(Form& copy);
		~Form();

		void	beSigned(const Bureaucrat&);
		
		const std::string& getName() const;
		const bool& getIsSigned() const;
		const int& getGradetoSign() const;
		const int& getGradeToExec() const;

	class GradeTooHighException: public std::exception
	{
		const char * what() const throw ();
	};
		
	class GradeTooLowException: public std::exception
	{
		const char * what() const throw ();
	};
};


std::ostream& operator<<(std::ostream& out, Form& obj);


#endif 