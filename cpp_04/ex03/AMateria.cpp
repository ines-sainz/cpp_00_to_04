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

/**
 * @brief Uses the Materia on the given character target.
 * 
 * Simulates both an ice bolt attack and a healing action using the target's name.
 * 
 * @param target The character receiving the effect of the Materia.
 */
void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/**
 * @brief Gets the type of the Materia.
 * 
 * @return const std::string& The type string of the Materia.
 */
std::string const & AMateria::getType() const
{
	return (this->type);
}

/**
 * @brief Constructs an AMateria with the given type.
 * 
 * @param type The type to assign to the Materia.
 */
AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

/**
 * @brief Assignment operator for AMateria.
 * 
 * Copies the type from another AMateria instance.
 * 
 * @param before The AMateria instance to copy from.
 * @return AMateria& Reference to the current instance.
 */
AMateria& AMateria::operator=( const AMateria& before )
{
	std::cout << "Copy AMateria Assigment Operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor for AMateria.
 * 
 * Duplicates another AMateria instance's type.
 * 
 * @param before The AMateria instance to copy.
 */
AMateria::AMateria( const AMateria& before )
{
	std::cout << "Copy AMateria Constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for AMateria.
 * 
 * Initializes the type to an empty string.
 */
AMateria::AMateria( void )
{
	this->type = "";
	std::cout << "Default AMateria Constructor called" << std::endl;
}

/**
 * @brief Destructor for AMateria.
 * 
 * Outputs a message indicating destruction.
 */
AMateria::~AMateria()
{
	std::cout << "Default AMateria Destructor called" << std::endl;
}
