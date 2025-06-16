/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:26:33 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:26:36 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**
 * @brief Prompts a high five from the FragTrap.
 */
void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " ask for a high five" << std::endl;
}

/**
 * @brief Copy assignment operator for FragTrap.
 * 
 * @param before The FragTrap object to copy from.
 * @return FragTrap& Reference to the assigned object.
 */
FragTrap& FragTrap:: operator=(const FragTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

/**
 * @brief Copy constructor for FragTrap.
 * 
 * @param before The FragTrap object to copy from.
 */
FragTrap::FragTrap(const FragTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for FragTrap.
 * 
 * Initializes default values for name, hitPoints, energy, and damage.
 */
FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

/**
 * @brief Parameterized constructor for FragTrap.
 * 
 * @param name The name to assign to the FragTrap.
 */
FragTrap::FragTrap( std::string name )
{
	this->name = name;
	std::cout << "FragTrap " << this->name << " Constructor" << std::endl;
	this->hitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

/**
 * @brief Destructor for FragTrap.
 * 
 * Prints a message when the object is destroyed.
 */
FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap Destructor" << std::endl;
}
