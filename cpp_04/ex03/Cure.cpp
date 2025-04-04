/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:21:54 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:21:59 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use( ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *newMateria = new Cure();
    return (newMateria);
}

Cure& Cure::operator=( const Cure& before )
{
    std::cout << "Copy Cure Assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

Cure::Cure( const Cure& before)
{
    std::cout << "Copy Cure constructor called" << std::endl;
    *this = before;
}

Cure::Cure( void )
{
    std::cout << "Default Cure Consructor called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
    std::cout << "Default Cure Destructor called" << std::endl;
}
