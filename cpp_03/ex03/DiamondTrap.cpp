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

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap: " << this->name << ", ClapTrap: " << ClapTrap::name << std::endl;
}

DiamondTrap& DiamondTrap:: operator=(const DiamondTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}
DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default DiamondTrap Constructor" << std::endl;
	this->name = "";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string name )
{
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " Constructor" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap Destructor" << std::endl;
}
