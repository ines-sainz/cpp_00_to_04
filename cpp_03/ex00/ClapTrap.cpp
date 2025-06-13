/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:23:18 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:23:24 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Repairs the ClapTrap, restoring hit points.
 * 
 * Increases hit points by the given amount if ClapTrap is alive and has energy.
 * 
 * @param amount The amount of hit points to restore.
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
 * @brief Causes the ClapTrap to take damage.
 * 
 * Reduces hit points by the given amount. If hit points reach zero or less,
 * ClapTrap is considered dead.
 * 
 * @param amount The amount of damage to apply.
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
 * @brief Performs an attack on the specified target.
 * 
 * Decreases energy points by 1 if there is enough energy and ClapTrap is alive.
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
 * @brief Copy assignment operator for ClapTrap.
 * 
 * Copies all attributes from the given ClapTrap instance.
 * 
 * @param before The ClapTrap instance to copy from.
 * @return ClapTrap& Reference to the current object.
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
 * @brief Copy constructor for ClapTrap.
 * 
 * Creates a new ClapTrap instance by copying another.
 * 
 * @param before The ClapTrap instance to copy.
 */
ClapTrap::ClapTrap(const ClapTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Constructor with name for ClapTrap.
 * 
 * Initializes ClapTrap with the given name and default attributes.
 * 
 * @param name Name of the ClapTrap.
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
 * @brief Default constructor for ClapTrap.
 * 
 * Initializes ClapTrap with default values.
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
 * @brief Destructor for ClapTrap.
 * 
 * Cleans up the ClapTrap instance.
 */
ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap Destructor" << std::endl;
}
