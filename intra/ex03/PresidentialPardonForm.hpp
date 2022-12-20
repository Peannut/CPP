/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:19:35 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/20 11:12:09 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm&);
		PresidentialPardonForm& operator=(PresidentialPardonForm&);
		~PresidentialPardonForm();

		void	formTask() const;
};



#endif