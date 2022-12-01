/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:40:48 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 10:31:03 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_H_
# define _FORM_H_

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int _grade_to_exec;
		const int _grade_to_sign;
		bool _is_signed;
		std::string _target;
		
	public:
		Form();
		Form(const std::string&, const int&, const int&, const std::string&);
		Form(const Form&);
		Form& operator=(const Form&);
		virtual ~Form();

		const std::string& getName() const;
		const bool& getIsSigned() const;
		const int& getGradetoSign() const;
		const int& getGradeToExec() const;
		const std::string& getTarget() const;

		void	beSigned(const Bureaucrat&);
		void	execute(Bureaucrat const& executor) const;
		virtual	void	formTask() const = 0;
		
	class GradeTooHighException: public std::exception{
			const char * what() const throw ();
		};
		
	class GradeTooLowException: public std::exception{
			const char * what() const throw ();
		};
};

std::ostream& operator<<(std::ostream& out, Form& obj);


#endif /* _FORM_H_ */