/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:49 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

/**
 * @brief Sets the weapon reference for HumanB.
 *
 * Uses a pointer to store the address of the weapon passed by reference.
 * This allows changing the weapon externally to affect the HumanB's weapon.
 *
 * @param weapon Reference to a Weapon object to assign to HumanB.
 */
void HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}

/**
 * @brief Makes HumanB attack using its weapon.
 *
 * Prints a message showing the attack with the weapon's type.
 * If no weapon is set, informs that the HumanB does not have a weapon.
 */
void HumanB:: attack( void )
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " does not have a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

/**
 * @brief Constructs a HumanB with a name and no weapon initially.
 *
 * Initializes the weapon pointer to NULL and sets the name.
 *
 * @param name Name of the HumanB.
 */
HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB Constructor" << std::endl;
}

/**
 * @brief Destructor for HumanB.
 *
 * Prints a message indicating the HumanB object is being destroyed.
 */
HumanB::~HumanB( void )
{
	std::cout << "HumanB Destructor" << std::endl;
}
