/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:21:01 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:21:05 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

AMateria& AMateria::operator=( const AMateria& before )
{
	std::cout << "Copy AMateria Assigment Operator called" << std::endl;
	this->type = before.type;
	return (*this);
}
AMateria::AMateria( const AMateria& before )
{
	std::cout << "Copy AMateria Constructor called" << std::endl;
	*this = before;
}

AMateria::AMateria( void )
{
	this->type = "";
	std::cout << "Default AMateria Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default AMateria Destructor called" << std::endl;
}
