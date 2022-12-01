/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:48:59 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/13 10:00:38 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIA_SOURCE_H_
# define _MATERIA_SOURCE_H_

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria**	_known_materias;
		int 		_full_size;
	public:
		MateriaSource();
		MateriaSource(MateriaSource& copy);
		MateriaSource& operator=(MateriaSource& copy);
		~MateriaSource();
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);	
};

#endif /* _MATERIA_SOURCE_H_ */