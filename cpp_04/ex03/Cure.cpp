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

/**
 * @brief Uses the Cure Materia on the target character.
 * 
 * Prints a message indicating that the target's wounds are healed.
 * 
 * @param target The character being healed.
 */
void Cure::use( ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/**
 * @brief Creates a new copy of the Cure Materia.
 * 
 * @return AMateria* A pointer to a new Cure instance.
 */
AMateria* Cure::clone() const
{
    AMateria *newMateria = new Cure();
    return (newMateria);
}

/**
 * @brief Assignment operator for Cure.
 * 
 * Copies the type from another Cure instance.
 * 
 * @param before The Cure object to copy from.
 * @return Cure& Reference to this Cure instance.
 */
Cure& Cure::operator=( const Cure& before )
{
    std::cout << "Copy Cure Assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

/**
 * @brief Copy constructor for Cure.
 * 
 * Initializes this Cure with the values of another Cure instance.
 * 
 * @param before The Cure object to copy.
 */
Cure::Cure( const Cure& before)
{
    std::cout << "Copy Cure constructor called" << std::endl;
    *this = before;
}

/**
 * @brief Default constructor for Cure.
 * 
 * Sets the type to "cure" and prints a construction message.
 */
Cure::Cure( void )
{
    std::cout << "Default Cure Consructor called" << std::endl;
    this->type = "cure";
}

/**
 * @brief Destructor for Cure.
 * 
 * Prints a message indicating Cure destruction.
 */
Cure::~Cure()
{
    std::cout << "Default Cure Destructor called" << std::endl;
}
