/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WronfDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:47:34 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/16 21:26:07 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();

		Dog & operator=(Dog const & rhs);
		
		void	makeSound() const;
};

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(WrongDog const & src);
		~WrongDog();

		WrongDog & operator=(WrongDog const & rhs);
		
		void	makeSound() const;
};
