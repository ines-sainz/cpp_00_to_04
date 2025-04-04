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

ClapTrap& ClapTrap:: operator=(const ClapTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "ClapTrap " << this->name << " Constructor" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	name = "";
	this->hitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "Default ClapTrap Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap Destructor" << std::endl;
}


