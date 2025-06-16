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

/**
 * @brief Uses the Ice Materia on the target character.
 * 
 * Prints a message indicating that an ice bolt is shot at the target.
 * 
 * @param target The character being attacked.
 */
void Ice::use( ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/**
 * @brief Creates a new copy of the Ice Materia.
 * 
 * @return AMateria* A pointer to a new Ice instance.
 */
AMateria* Ice::clone() const
{
    AMateria *newMateria = new Ice();
    return (newMateria);
}

/**
 * @brief Assignment operator for Ice.
 * 
 * Copies the type from another Ice instance.
 * 
 * @param before The Ice object to copy from.
 * @return Ice& Reference to this Ice instance.
 */
Ice& Ice::operator=( const Ice& before)
{
    std::cout << "Copy Ice assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

/**
 * @brief Copy constructor for Ice.
 * 
 * Initializes this Ice with the values of another Ice instance.
 * 
 * @param before The Ice object to copy.
 */
Ice::Ice( const Ice& before )
{
    std::cout << "Copy Ice constructor called" << std::endl;
    *this = before;
}

/**
 * @brief Default constructor for Ice.
 * 
 * Sets the type to "ice" and prints a construction message.
 */
Ice::Ice( void )
{
    this->type = "ice";
    std::cout << "Default Ice Constructor called" << std::endl;
}

/**
 * @brief Destructor for Ice.
 * 
 * Prints a message indicating Ice destruction.
 */
Ice::~Ice()
{
    std::cout << "Default Ice Destructor called" << std::endl;
}
