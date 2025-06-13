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
 * @brief Requests a high five from others.
 * 
 * Displays a message indicating that the FragTrap wants a high five.
 */
void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " ask for a high five" << std::endl;
}

/**
 * @brief Copy assignment operator for FragTrap.
 * 
 * Copies the attributes from another FragTrap instance.
 * 
 * @param before The FragTrap instance to copy from.
 * @return FragTrap& Reference to the assigned FragTrap instance.
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
 * Initializes a new FragTrap by copying another instance.
 * 
 * @param before The FragTrap instance to copy.
 */
FragTrap::FragTrap(const FragTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for FragTrap.
 * 
 * Initializes a FragTrap with default values.
 */
FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

/**
 * @brief Parameterized constructor for FragTrap.
 * 
 * Initializes a FragTrap with a given name and default stats.
 * 
 * @param name The name to assign to the FragTrap.
 */
FragTrap::FragTrap( std::string name )
{
	this->name = name;
	std::cout << "FragTrap " << this->name << " Constructor" << std::endl;
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

/**
 * @brief Destructor for FragTrap.
 * 
 * Displays a message when a FragTrap is destroyed.
 */
FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap Destructor" << std::endl;
}
