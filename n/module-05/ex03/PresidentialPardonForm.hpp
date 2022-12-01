/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:56:26 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 10:31:08 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_H_
# define _PRESIDENTIALPARDONFORM_H_

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm&);
		PresidentialPardonForm& operator=(PresidentialPardonForm&);
		~PresidentialPardonForm();

		void	formTask() const;
};

#endif /* _PRESIDENTIALPARDONFORM_H_ */