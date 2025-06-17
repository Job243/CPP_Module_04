/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:45:27 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 21:08:19 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

class Aanimal
{
	protected:
		std::string type;
	public:
		Aanimal();
		Aanimal(Aanimal const  & src);
		virtual ~Aanimal();

		Aanimal & operator=(Aanimal const & rhs);

		virtual void	makeSound() const = 0;

		std::string	getType() const;
};

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const  & src);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void	makeSound() const;

		std::string	getType() const;
};
