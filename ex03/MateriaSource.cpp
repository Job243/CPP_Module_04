/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:24:01 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/29 19:36:37 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->sourceM[i] = NULL;
	// std::cout << "Default MateriaSource has been called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.sourceM[i])	
			this->sourceM[i] = src.sourceM[i]->clone();
		else
			this->sourceM[i] = NULL;
	}
	// std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->sourceM[i])
		{
			delete this->sourceM[i];
			this->sourceM[i] = NULL;
		}
	}
	// std::cout << "MateriaSource destructor has been called." << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->sourceM[i])
			{
				delete this->sourceM[i];
				this->sourceM[i] = NULL;
			}
			if (rhs.sourceM[i])
				this->sourceM[i] = rhs.sourceM[i]->clone();
		}
	}
	// std::cout << "MateriaSource copy assignment operator called." << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->sourceM[i] == NULL)
		{
			this->sourceM[i] = m->clone();
			break ;
		}		
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->sourceM[i] && this->sourceM[i]->getType() == type)
		{
			// std::cout << "Materia of type " << type << " has beeen created." << std::endl;
			return this->sourceM[i]->clone();
		}
	}
	std::cout << "Unknown type" << std::endl;
	return NULL;
}
