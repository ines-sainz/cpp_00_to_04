/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:06:16 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:18 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Announces the zombie's presence with a brain-loving message.
 */
void Zombie:: announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
}

/**
 * @brief Constructs a Zombie with the given name.
 * @param name The name of the zombie.
 */
Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "Zombie Constructor" <<std::endl;
}

/**
 * @brief Destructor for the Zombie.
 *
 * Logs the destruction of the zombie with its name.
 */
Zombie::~Zombie( void )
{
	std::cout << name << " Zombie Destructor" <<std::endl;
}
