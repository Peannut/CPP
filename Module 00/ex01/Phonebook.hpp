/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:15:03 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/09 18:33:53 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include "Contact.hpp"



class phonebook
{








	
private:
		Contact	_contacts[8];
		int		_index;
public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		/* Getters */
		Contact	get_contact(int index);
};


#endif