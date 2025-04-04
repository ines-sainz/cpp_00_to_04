/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:51:26 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:51:28 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon:: getType( void )
{
	return (this->type);
}
void Weapon:: setType(std::string type)
{
	this->type = type;
}


Weapon::Weapon( std::string type )
{
	this->type = type;
	std::cout << "Weapon Constructor" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon Destructor" << std::endl;
}

