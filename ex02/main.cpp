/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:03:47 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/25 19:29:30 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Aanimal* j = new Dog();
	const Aanimal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n---Tableau d'objets Animal ---\n" << std::endl;
	
	const int size = 10;
	Aanimal* animals[size];

	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Deleting animals ---\n" << std::endl;

	for (int i = 0; i < size; ++i)
	{
		delete animals[i];
	}
	
	return 0;
}

