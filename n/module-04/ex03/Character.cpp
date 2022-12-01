/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:04:47 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/15 15:56:05 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "N/A";
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << "[ Character Default Construction ]" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	_full_size = 0;
	std::cout << "[ Character Construction ]" << std::endl;
}

Character::Character(Character& copy)
{
	_name = copy._name;
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
	_full_size = copy._full_size;
	std::cout << "[ Character Copy Construction ]" << std::endl;
}

Character& Character::operator=(Character& copy)
{
	_name = copy._name;
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
	_full_size = copy._full_size;
	std::cout << "[ Character Copy Assignment Construction ]" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	delete[] _inventory;
	std::cout << "[ Character Destruction ]" << std::endl;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			_full_size++;
			return ;
		}
	}
	std::cout << getName() << " cannot equip more than 4 Materias" << std::endl;
}

void Character::unequip(int idx)
{
	if (_full_size == 0)
	{
		std::cout << getName() << " has 0 Materia" << std::endl;
		return ;
	}
	if (idx < 0 || idx > 3)
	{
		std::cout << getName() << " has only 4 slots" << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << getName() << " has no Materia in this slot" << std::endl;
		return ;
	}
	delete _inventory[idx];
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Slot number " << idx << " is empty in " << getName() << "'s inventory" << std::endl;
	}
	if (!_inventory[idx])
	{
		std::cout << "Slot number " << idx << " is empty in " << getName() << "'s inventory" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
