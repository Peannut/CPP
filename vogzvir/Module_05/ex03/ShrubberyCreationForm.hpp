/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 08:54:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 11:26:48 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_


#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm&);
		~ShrubberyCreationForm();

		void	formTask() const;
};


#endif 