/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:46:37 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/14 13:03:55 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_H_
# define _ICE_H_

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice& copy);
		Ice& operator=(Ice& copy);
		~Ice();
	
	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif /* _ICE_H_ */