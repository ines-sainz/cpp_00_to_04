/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:28:59 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 12:29:01 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: put_name( std::string name )
{
	this->name = name;
}

void Zombie:: announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie( void )
{
	this->name = "";
	std::cout << "Zombie Constructor" <<std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << " Zombie Destructor" <<std::endl;
}
