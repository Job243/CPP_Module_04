/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:11:42 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/26 21:22:20 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

int	main()
{
	std::cout << "\n--- Création de la source de matérias ---" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << "\n--- Apprentissage de matérias ---" << std::endl;
	AMateria* tmp;
	
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;

	std::cout << "\n--- Création de Hero ---" << std::endl;
	ICharacter* me = new Character("Hero");

	std::cout << "\n--- Création et équipement de matérias ---" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n--- Création de Bob ---" << std::endl;
	ICharacter* bob = new Character("Bob");

	std::cout << "\n--- Utilisation des matérias ---" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n--- Nettoyage ---" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}
