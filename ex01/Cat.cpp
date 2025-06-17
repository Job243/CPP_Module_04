/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:12 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 20:50:47 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new	Brain();
	std::cout << "Default Cat constructor has been called." << std::endl;
}

Cat::Cat(Cat const  & src):Animal(src)
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Cat copy contructor has been called." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor has been called." << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << " : Mmmiiaaaoouuuu..." << std::endl;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor has been called." << std::endl;
}

WrongCat::WrongCat(WrongCat const  & src):WrongAnimal()
{
	*this = src;
	std::cout << "WrongCat copy contructor has been called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << " : Mmmiiaaaoouuuu..." << std::endl;
}
