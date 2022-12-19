/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:26 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/11 01:25:10 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_counter = 0;
	for(int i = 0;i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	*this = obj;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	_counter = obj._counter;
	for(int i = 0; i < 4; i++)
		if (_materia[i])
			delete _materia[i];
	for(int i = 0; i < 4; i++)
		if (obj._materia[i])
		_materia[i] = obj._materia[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* obj)
{
	if (_counter < 4)
		_materia[_counter++] = obj;
	else
		std::cout << "the inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < _counter ; i++)
	{
		if ( _materia[i] && !_materia[i]->getType().compare(type))
			return (_materia[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		if (_materia[i])
			delete _materia[i];
}