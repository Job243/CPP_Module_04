/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:47:03 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 16:19:22 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("notype")
{
	std::cout << "Default Animal constructor has been called." << std::endl;
}

Animal::Animal(Animal const  & src)
{
	*this = src;
	std::cout << "Animal copy contructor has been called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called." << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Animal copy assignment operator called." << std::endl;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes stranges sounds." << std::endl;
}

std::string	Animal::getType() const
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
