/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:13:44 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 21:17:47 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

Amateria::Amateria()
{
	std::cout << "Amateria constructor has been called" << std::endl;
}

Amateria::Amateria(Amateria const & src)
{
	*this = src;
}

Amateria::~Amateria()
{
	std::cout << "Amateria destructo has been called" << std::endl;
}

Amateria & Amateria::operator=(Amateria const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return *this;
}
