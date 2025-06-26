/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:49:05 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/26 19:58:37 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
	protected:
		std::string name;
		AMateria*	inventaire[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character& src);
		virtual ~Character();

		Character & operator=(const Character& rhs);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int);
		void use(int idx, ICharacter& target);
};
