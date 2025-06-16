/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:12 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/16 21:25:37 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor has been called." << std::endl;
}

Cat::Cat(Cat const  & src):Animal()
{
	*this = src;
	std::cout << "Cat copy contructor has been called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called." << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
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

WrongCat::WrongCat(WrongCat const  & src):Animal()
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
