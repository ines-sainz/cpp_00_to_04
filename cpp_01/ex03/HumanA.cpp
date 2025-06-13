/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:31 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
 * @brief Displays an attack message with the weapon used by HumanA.
 *
 * Uses the name of the human and the type of the weapon to display
 * an attack message.
 */
void HumanA:: attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

/**
 * @brief Constructs a HumanA with a name and a reference to a weapon.
 *
 * @param name The name of the HumanA.
 * @param weapon A reference to a Weapon object used by HumanA.
 */
HumanA::HumanA( std::string name, Weapon& weapon ) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
	std::cout << "HumanA Constructor" << std::endl;
}

/**
 * @brief Destructor for HumanA.
 *
 * Prints a message indicating destruction of the HumanA object.
 */
HumanA::~HumanA( void )
{
	std::cout << "HumanA Contructor" << std::endl;
}
