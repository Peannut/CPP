/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:17:26 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/19 16:46:53 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(Bureaucrat& copy);
		Bureaucrat& operator=(Bureaucrat& copy);
		~Bureaucrat();

		const std::string& getName() const;
		const int& getGrade() const;
		void		garadeIncrement();
		void		gradeDecrement();

		class GradeTooHighException : public std::exception
		{	public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{	public:
				const char * what() const throw();
		};
		
};

std::ostream& operator<<(std::ostream& out , Bureaucrat& obj);

#endif 