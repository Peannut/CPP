/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:59:52 by waboutzo          #+#    #+#             */
/*   Updated: 2022/10/01 19:08:07 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int _counter;
		AMateria *_materia[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& obj);
		MateriaSource& operator=(MateriaSource const& obj);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif