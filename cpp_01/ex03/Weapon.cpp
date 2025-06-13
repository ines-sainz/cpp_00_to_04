/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:51:26 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:51:28 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/**
 * @brief Gets the type of the weapon.
 *
 * @return Constant reference to the weapon type string.
 */
const std::string& Weapon:: getType( void )
{
	return (this->type);
}

/**
 * @brief Sets the type of the weapon.
 *
 * @param type New type to assign to the weapon.
 */
void Weapon:: setType(std::string type)
{
	this->type = type;
}

/**
 * @brief Constructs a Weapon with a given type.
 *
 * @param type The type of the weapon to initialize.
 */
Weapon::Weapon( std::string type )
{
	this->type = type;
	std::cout << "Weapon Constructor" << std::endl;
}

/**
 * @brief Destructor for Weapon.
 *
 * Prints a message indicating the Weapon object is destroyed.
 */
Weapon::~Weapon( void )
{
	std::cout << "Weapon Destructor" << std::endl;
}
