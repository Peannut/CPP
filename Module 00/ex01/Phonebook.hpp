/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:15:03 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/17 10:09:35 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include "Contact.hpp"

class Phonebook
{
	
	private:
		Contact contactlist[8];
		std::string selection;
		int findId(std::string selection);
	public:
 		void showContact(void);
    	void contactFill();
    	void contactSearch();
    	void selectContact();
		std::string  input;
};


#endif