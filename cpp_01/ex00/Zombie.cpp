/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:06:16 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:18 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "Zombie Constructor" <<std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << " Zombie Destructor" <<std::endl;
}
