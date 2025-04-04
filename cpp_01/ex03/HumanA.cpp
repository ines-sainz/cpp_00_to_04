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

void HumanA:: attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon& weapon ) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
	std::cout << "HumanA Constructor" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << "HumanA Contructor" << std::endl;
}
