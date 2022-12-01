/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:35:02 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/12 12:18:04 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_H_
# define _CURE_H_

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure& copy);
		Cure& operator=(Cure& copy);
		~Cure();
	
	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif /* _CURE_H_ */