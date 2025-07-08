/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:03:47 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/27 16:39:13 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	
    std::cout << "--- WrongAnimal tests ---" << std::endl;

    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << cat->getType() << std::endl;
	std::cout << animal->getType() << std::endl;

    cat->makeSound();
    animal->makeSound();

    delete animal;
    delete cat;

    std::cout << "\n--- Correct Animal tests for comparison ---" << std::endl;

	delete meta;
	delete j;
	delete i;

	return 0;
}

