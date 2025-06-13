/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:24:29 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:24:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Repairs the ClapTrap by a given amount of hit points.
 * 
 * If the ClapTrap is dead or out of energy, it cannot be repaired.
 *
 * @param amount The number of hit points to restore.
 */
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't be repaired because it has died" << std::endl;
		return ;
	}
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout <<" can't be repaired because it has no energy left to do it" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name;
	std::cout << " has been repaired! It now has " << this->hitPoints << " hit points" << std::endl;
	this->EnergyPoints -= 1;
}

/**
 * @brief Inflicts damage to the ClapTrap, reducing its hit points.
 *
 * If hit points drop to or below zero, the ClapTrap is considered dead.
 *
 * @param amount The amount of damage to inflict.
 */
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "Target " << this->name << " can't take damage because it has died" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		std::cout << "Target " << this->name << " takes damage " << amount;
		std::cout << ". It is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes damage " << amount;
	std::cout << ". " << this->hitPoints << " hit points left!\n";
}

/**
 * @brief Attacks the given target, causing damage if enough energy is available.
 * 
 * If the ClapTrap is dead or has no energy, it cannot attack.
 *
 * @param target The name of the target being attacked.
 */
void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "Target " << target << " can't be attacked because ";
		std::cout << "ClapTrap " << this->name << " has died" << std::endl;
		return ;
	}
	if (this->EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!\n";
		this->EnergyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->name << " can't attack, not enough EnergyPoints" << std::endl;
}

/**
 * @brief Copy assignment operator.
 * 
 * Copies the attributes from another ClapTrap.
 *
 * @param before The ClapTrap to copy from.
 * @return Reference to the assigned ClapTrap.
 */
ClapTrap& ClapTrap:: operator=(const ClapTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

/**
 * @brief Copy constructor.
 *
 * Creates a new ClapTrap as a copy of another.
 *
 * @param before The ClapTrap to copy.
 */
ClapTrap::ClapTrap(const ClapTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Parameterized constructor.
 *
 * Initializes a ClapTrap with a given name.
 *
 * @param name The name of the ClapTrap.
 */
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "ClapTrap " << this->name << " Constructor" << std::endl;
}

/**
 * @brief Default constructor.
 *
 * Initializes a ClapTrap with default values.
 */
ClapTrap::ClapTrap(void)
{
	name = "";
	this->hitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "Default ClapTrap Constructor" << std::endl;
}

/**
 * @brief Destructor.
 *
 * Cleans up when a ClapTrap object is destroyed.
 */
ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap Destructor" << std::endl;
}
