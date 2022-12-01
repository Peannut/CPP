/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:40:27 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/17 11:21:25 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H_
# define _BUREAUCRAT_H_

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		const std::string& getName() const;
		const int& getGrade() const;
		void	gradeUp();
		void	gradeDown();

		void	signForm(Form&);

		class GradeTooHighException: public std::exception{
			const char * what() const throw ();
		};
		
		class GradeTooLowException: public std::exception{
			const char * what() const throw ();
		};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& obj);

#endif /* _BUREAUCRAT_H_ */