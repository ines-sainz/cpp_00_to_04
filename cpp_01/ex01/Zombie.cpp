/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:28:59 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 12:29:01 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Sets the name of the Zombie.
 *
 * @param name The name to assign to the Zombie.
 */
void Zombie:: put_name( std::string name )
{
	this->name = name;
}

/**
 * @brief Prints the Zombie's announcement to the console.
 *
 * Displays the Zombie's name followed by "BraiiiiiiinnnzzzZ...".
 */
void Zombie:: announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
}

/**
 * @brief Default constructor for Zombie.
 *
 * Initializes the Zombie with an empty name and prints a creation message.
 */
Zombie::Zombie( void )
{
	this->name = "";
	std::cout << "Zombie Constructor" <<std::endl;
}

/**
 * @brief Destructor for Zombie.
 *
 * Prints a message indicating the Zombie is being destroyed.
 */
Zombie::~Zombie( void )
{
	std::cout << name << " Zombie Destructor" <<std::endl;
}
