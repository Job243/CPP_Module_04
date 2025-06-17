/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:28:15 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 19:44:15 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "empty";
	std::cout << "Brain constructor has been called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}
