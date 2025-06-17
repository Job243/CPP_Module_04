/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:12:27 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 21:17:54 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Amateria
{
protected:
	
public:
	Amateria();
	Amateria(Amateria const & src);
	~Amateria();

	Amateria & operator=(Amateria const & rhs);
};
