/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:12:27 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/26 20:47:01 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
protected:
	std::string type;
	
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();

	std::string const & getType() const;

	AMateria & operator=(AMateria const & rhs);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& src);
		~Ice();

		Ice & operator=(const Ice& rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& src);
		~Cure();

		Cure & operator=(const Cure& rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* sourceM[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		~MateriaSource();

		MateriaSource & operator=(const MateriaSource& rhs);
		void learnMateria(AMateria*) ;
		AMateria* createMateria(std::string const & type);

};
