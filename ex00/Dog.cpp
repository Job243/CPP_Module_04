/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:48:23 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 16:18:22 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor has been called." << std::endl;
}

Dog::Dog(Dog const  & src):Animal()
{
	*this = src;
	std::cout << "Dog copy contructor has been called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called." << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "Dog copy assignment operator called." << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type << " : Woaf woaf !!!" << std::endl;
}

WrongDog::WrongDog()
{
	this->type = "WrongDog";
	std::cout << "Default WrongDog constructor has been called." << std::endl;
}

WrongDog::WrongDog(WrongDog const  & src):WrongAnimal()
{
	*this = src;
	std::cout << "WrongDog copy contructor has been called." << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor has been called." << std::endl;
}

WrongDog & WrongDog::operator=(WrongDog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "WrongDog copy assignment operator called." << std::endl;
	return *this;
}

void	WrongDog::makeSound() const
{
	std::cout << this->type << " : Woaf woaf !!!" << std::endl;
}
