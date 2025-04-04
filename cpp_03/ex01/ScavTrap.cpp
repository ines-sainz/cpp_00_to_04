/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:25:36 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:25:41 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "Target " << target << " can't be attacked because ";
		std::cout << "ScavTrap " << this->name << " has died" << std::endl;
		return ;
	}
	if (this->EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!\n";
		this->EnergyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this->name << " can't attack, not enough EnergyPoints" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

ScavTrap::ScavTrap( void )
{
	std::cout << "Default ScavTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string name )
{
	this->name = name;
	std::cout << "ScavTrap " << this->name << " Constructor" << std::endl;
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap Destructor" << std::endl;
}
