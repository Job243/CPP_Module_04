/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:11:42 by jmafueni          #+#    #+#             */
/*   Updated: 2025/07/08 19:12:10 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();

	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	delete ice;
	delete cure;

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("fire");
	if (tmp == NULL)
		std::cout << "Creation failed for unknown materia 'fire'." << std::endl;

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);  // ice sur bob
	me->use(1, *bob);  // cure sur bob

	me->use(2, *bob);

	me->equip(NULL);

	AMateria* ice2 = src->createMateria("ice");
	AMateria* cure2 = src->createMateria("cure");
	AMateria* ice3 = src->createMateria("ice");
	AMateria* cure3 = src->createMateria("cure");

	me->equip(ice2);
	me->equip(ice2);
	me->equip(cure2);
	me->equip(ice3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);
	me->equip(cure3);


	std::cout << "Test sur Materia à partir de l'indice 2:" << std::endl;
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);

	me->unequip(2);
	me->unequip(4);
	me->unequip(5);
	me->unequip(3);
	
	delete ice2;
	delete cure2;
	delete ice3;
	delete cure3;
	// delete ice;
	// delete cure;
	delete bob;
	delete src;
	delete me;

	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();

// 	AMateria* ice = new Ice();
// 	AMateria* cure = new Cure();

// 	src->learnMateria(ice);
// 	src->learnMateria(cure);

// 	delete ice;
// 	delete cure;

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	tmp = src->createMateria("fire");
// 	if (tmp == NULL)
// 		std::cout << "Creation failed for unknown materia 'fire'." << std::endl;

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);  // ice sur bob
// 	me->use(1, *bob);  // cure sur bob

// 	me->use(2, *bob);

// 	me->equip(NULL);

// 	AMateria* ice2 = src->createMateria("ice");
// 	AMateria* cure2 = src->createMateria("cure");
// 	AMateria* ice3 = src->createMateria("ice");
// 	AMateria* cure3 = src->createMateria("cure");

// 	me->equip(ice2);
// 	me->equip(cure2);
// 	me->equip(ice3);
// 	me->equip(cure3);
	
// 	std::cout << "Test sur Materia à partir de l'indice 2:" << std::endl;
// 	me->use(2, *bob);
// 	me->use(3, *bob);
// 	me->use(4, *bob);
// 	me->use(5, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }


// int main()
// {
// 	// Création de la source de materias
// 	IMateriaSource* src = new MateriaSource();

// 	// Création d'objets Materia "originaux"
// 	AMateria* ice = new Ice();
// 	AMateria* cure = new Cure();

// 	// Apprentissage des materias (copies stockées dans src)
// 	src->learnMateria(ice);
// 	src->learnMateria(cure);

// 	// On supprime les materias originales (on a stocké des clones)
// 	delete ice;
// 	delete cure;

// 	// Création d'un personnage
// 	ICharacter* me = new Character("me");

// 	// Création de materias à partir du type (clone de celles apprises)
// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	// Tester le cas d'un type inconnu (doit retourner nullptr)
// 	tmp = src->createMateria("fire");
// 	if (tmp == NULL)
// 		std::cout << "Creation failed for unknown materia 'fire'." << std::endl;

// 	// Création d'un autre personnage cible
// 	ICharacter* bob = new Character("bob");

// 	// Utilisation des materias équipées
// 	me->use(0, *bob);  // ice sur bob
// 	me->use(1, *bob);  // cure sur bob

// 	// Test : essayer d'utiliser une case vide ou hors limite
// 	me->use(2, *bob);  // case vide, rien ne devrait se passer

// 	// Test : essayer d'équiper un nullptr (doit ignorer)
// 	me->equip(NULL);

// 	// Test : équiper plus de 4 materias, seules 4 doivent être équipées
// 	AMateria* ice2 = src->createMateria("ice");
// 	AMateria* cure2 = src->createMateria("cure");
// 	AMateria* ice3 = src->createMateria("ice");
// 	AMateria* cure3 = src->createMateria("cure");

// 	me->equip(ice2);
// 	me->equip(cure2);
// 	me->equip(ice3);   // 5e materia, ne doit pas être équipée
// 	me->equip(cure3);  // 6e materia, ne doit pas être équipée
	
// 	std::cout << " Test sur Materia au dessus de 2:" << std::endl;
// 	me->use(2, *bob);  // ice sur bob
// 	me->use(3, *bob);  // cure sur bob
// 	me->use(4, *bob);  // ice sur bob
// 	me->use(5, *bob);  // cure sur bob
// 	// Libération de tout
// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }


// int	main()
// {
// 	std::cout << "\n--- Création de la source de matérias ---" << std::endl;
// 	IMateriaSource* src = new MateriaSource();

// 	std::cout << "\n--- Apprentissage de matérias ---" << std::endl;
// 	AMateria* tmp;
	
// 	tmp = new Ice();
// 	src->learnMateria(tmp);
// 	delete tmp;

// 	tmp = new Cure();
// 	src->learnMateria(tmp);
// 	delete tmp;

// 	std::cout << "\n--- Création de Hero ---" << std::endl;
// 	ICharacter* me = new Character("Hero");

// 	std::cout << "\n--- Création et équipement de matérias ---" << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	std::cout << "\n--- Création de Bob ---" << std::endl;
// 	ICharacter* bob = new Character("Bob");

// 	std::cout << "\n--- Utilisation des matérias ---" << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << "\n--- Nettoyage ---" << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }
