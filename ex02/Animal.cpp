/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:47:03 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 21:08:45 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Aanimal::Aanimal():type("notype")
{
	std::cout << "Default Aanimal constructor has been called." << std::endl;
}

Aanimal::Aanimal(Aanimal const  & src)
{
	*this = src;
	std::cout << "Aanimal copy contructor has been called." << std::endl;
}

Aanimal::~Aanimal()
{
	std::cout << "Aanimal destructor has been called." << std::endl;
}

Aanimal & Aanimal::operator=(Aanimal const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Aanimal copy assignment operator called." << std::endl;
	return *this;
}

void	Aanimal::makeSound() const
{
	std::cout << "Aanimal makes stranges sounds." << std::endl;
}

std::string	Aanimal::getType() const
{
	return this->type;
}

WrongAnimal::WrongAnimal():type("notype")
{
	std::cout << "Default WrongAnimal constructor has been called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const  & src)
{
	*this = src;
	std::cout << "WrongAnimal copy contructor has been called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Animal makes stranges sounds." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}
