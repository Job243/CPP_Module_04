/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:48:46 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/16 21:24:27 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat & operator=(Cat const & rhs);

	void	makeSound() const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const & src);
	~WrongCat();

	WrongCat & operator=(WrongCat const & rhs);

	void	makeSound() const;
};
