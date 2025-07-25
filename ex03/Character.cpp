/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 21:29:04 by jmafueni          #+#    #+#             */
/*   Updated: 2025/07/08 19:11:43 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character():name("Noname")
{
	for (int i = 0; i < 4; i++)
		this->inventaire[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->floor[i] = NULL;
	// std::cout << "Default Character constructor has been called" << std::endl;
}

Character::Character(std::string name):name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventaire[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->floor[i] = NULL;
	// std::cout << "Default AMateria constructor has been called" << std::endl;
}

Character::Character(const Character& src)
{
	this->name = src.name;
	for (int i = 0; i < 4; i++)
	{
		if (src.inventaire[i])
			this->inventaire[i] = src.inventaire[i]->clone();
		else
			this->inventaire[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
			this->floor[i] = NULL;
	// std::cout << "Character copy constructor has been called." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventaire[i])
		{
			delete this->inventaire[i];
			this->inventaire[i] = NULL;
		}
	}
	
	// std::cout << "Character destructor has been called" << std::endl;
}

Character & Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventaire[i])
			{
				delete this->inventaire[i];
				this->inventaire[i] = NULL;
			}
			if (rhs.inventaire[i])
				this->inventaire[i] = rhs.inventaire[i]->clone();
			else
				this->inventaire[i] = NULL;
		}
		for (int i = 0; i < 100; i++)
		{
			if (this->floor[i])	
			{
				delete this->floor[i];
				this->floor[i] = NULL;
			}
		}
	}
	// std::cout << "Character copy assignment operator has been called" << std::endl; 
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	if (sizeof(this->inventaire) == 4)
	{	
			std::cout << "You already equiped 4 Materias" << std::endl;

		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventaire[i] == NULL)
		{
			this->inventaire[i] = m;
			return ;
		}		
	}
	// delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventaire[idx] != NULL)
	{	
		for (int i = 0; i < 100; i++)
		{
			if (this->floor[i] == NULL)
			{
				this->floor[i] = this->inventaire[idx];
				break;
			}
		}
		this->inventaire[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventaire[idx])
		this->inventaire[idx]->use(target);
}
