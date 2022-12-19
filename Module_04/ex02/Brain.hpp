/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:31:43 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/18 14:57:55 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		Brain(Brain& copy);
		Brain& operator=(Brain& copy);
		~Brain();
		
		const std::string *getIdeas() const;
};

#endif
