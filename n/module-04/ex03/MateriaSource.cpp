/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:53:53 by nelidris          #+#    #+#             */
/*   Updated: 2022/11/01 13:36:01 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_known_materias = new AMateria*[4];
	_full_size = 0;
	std::cout << "[ MateriaSource Default Constructor ]" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& copy)
{
	_known_materias = new AMateria*[4];
	for (int i = 0; i < copy._full_size; i++)
		_known_materias[i] = copy._known_materias[i]->clone();
		
	_full_size = copy._full_size;
	std::cout << "[ MateriaSource Copy Constructor ]" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource& copy)
{
	for (int i = 0; i < _full_size; i++)
		delete _known_materias[i];
	for (int i = 0; i < copy._full_size; i++)
		_known_materias[i] = copy._known_materias[i]->clone();
		
	_full_size = copy._full_size;
	std::cout << "[ MateriaSource Copy Assignment Constructor ]" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _full_size; i++)
		delete _known_materias[i];
		
	delete[] _known_materias;
	std::cout << "[ MateriaSource Destructor ]" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_full_size > 3)
	{
		std::cout << "No more slot to learn anymore Materia" << std::endl;
		return ;
	}
	_known_materias[_full_size++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _full_size; i++)
	{
		if (_known_materias[i]->getType() == type)
			return (_known_materias[i]->clone());
	}
	return (NULL);
}
