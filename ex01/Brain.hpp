/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:27:10 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/17 20:51:10 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain & operator=(Brain const & rhs);
};
