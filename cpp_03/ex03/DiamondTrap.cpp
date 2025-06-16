/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:53:23 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/09 10:53:25 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**
 * @brief Prints the DiamondTrap's name and its ClapTrap base name.
 */
void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap: " << this->name << ", ClapTrap: " << ClapTrap::name << std::endl;
}

/**
 * @brief Copy assignment operator for DiamondTrap.
 * 
 * @param before The DiamondTrap object to copy from.
 * @return DiamondTrap& A reference to the assigned object.
 */
DiamondTrap& DiamondTrap:: operator=(const DiamondTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

/**
 * @brief Copy constructor for DiamondTrap.
 * 
 * @param before The DiamondTrap object to copy from.
 */
DiamondTrap::DiamondTrap(const DiamondTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for DiamondTrap.
 * 
 * Initializes default values and sets ClapTrap name suffix.
 */
DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default DiamondTrap Constructor" << std::endl;
	this->name = "";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
}

/**
 * @brief Parameterized constructor for DiamondTrap.
 * 
 * @param name The name to assign to the DiamondTrap.
 */
DiamondTrap::DiamondTrap( std::string name )
{
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " Constructor" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
}

/**
 * @brief Destructor for DiamondTrap.
 * 
 * Prints a message upon object destruction.
 */
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap Destructor" << std::endl;
}
