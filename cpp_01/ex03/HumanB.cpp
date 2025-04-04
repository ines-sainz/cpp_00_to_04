/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:49 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

/*pongo referencia porque así puedo cambiar en el main lo que
tiene club y así no se me imprime lo que había antes sino que
se está imprimiendo lo que he modificado ya que lo que estoy
modificando es club a través de la referencia que estoy
recibiendo*/
void HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}

void HumanB:: attack( void )
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " does not have a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB Constructor" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB Destructor" << std::endl;
}
