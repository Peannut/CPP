/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:57:07 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/01 18:57:34 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const& obj);
		Cure& operator=(Cure const& obj);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};

#endif