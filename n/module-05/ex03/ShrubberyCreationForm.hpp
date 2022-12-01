/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:54:45 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 10:31:26 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_H_
# define _SHRUBBERYCREATIONFORM_H_

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm&);
		~ShrubberyCreationForm();
		
		void	formTask() const;
};

#endif /* _SHRUBBERYCREATIONFORM_H_ */