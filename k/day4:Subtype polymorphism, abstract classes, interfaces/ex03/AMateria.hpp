/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:39:46 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/03 23:00:06 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(AMateria const& obj);
		AMateria& operator=(AMateria const& obj);
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		virtual ~AMateria();
};

#endif