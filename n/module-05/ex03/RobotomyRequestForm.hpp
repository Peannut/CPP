/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:55:43 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/18 10:31:17 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_H_
# define _ROBOTOMYREQUESTFORM_H_

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(RobotomyRequestForm&);
		RobotomyRequestForm& operator=(RobotomyRequestForm&);
		~RobotomyRequestForm();

		void	formTask() const;
};

#endif /* _ROBOTOMYREQUESTFORM_H_ */