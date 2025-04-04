/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:22:19 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:22:22 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use( ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *newMateria = new Ice();
    return (newMateria);
}

Ice& Ice::operator=( const Ice& before)
{
    std::cout << "Copy Ice assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

Ice::Ice( const Ice& before )
{
    std::cout << "Copy Ice constructor called" << std::endl;
    *this = before;
}

Ice::Ice( void )
{
    this->type = "ice";
    std::cout << "Default Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Default Ice Destructor called" << std::endl;
}
