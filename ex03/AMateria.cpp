/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:13:44 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/25 19:56:32 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor has been called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria constructor has been called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	this->type = src.type;
	std::cout << "AMateria copy constructor has been called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor has been called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout << "AMateria copy assignment operator has been called" << std::endl;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "No Ice & No Cure = No party ! " << target.getName() << " is safe." << std::endl;
}

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Defaul Ice constructor has been called." << std::endl;
}

Ice::Ice(const Ice& src):AMateria(src)
{
	*this = src;
	std::cout << "Ice copy constructor has been called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice & Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout << "Ice copy assignment operator has been called." << std::endl;
	return *this;
	
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;	
}

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Defaul Cure constructor has been called." << std::endl;
}

Cure::Cure(const Cure& src):AMateria(src)
{
	*this = src;
	std::cout << "Cure copy constructor has been called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

Cure & Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout << "Cure copy assignment operator has been called." << std::endl;
	return *this;
	
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}