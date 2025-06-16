/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:23:17 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:23:20 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/**
 * @brief Creates a Materia of the specified type.
 * 
 * Searches the learned materias and returns a clone of the matching type.
 * 
 * @param type The type of Materia to create.
 * @return AMateria* A clone of the matched Materia, or NULL if not found.
 */
AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == this->materias[i]->getType())
		{
			std::cout << "Created the materia " << type << std::endl;
			return (this->materias[i]->clone());
		}
	}
	std::cout << "Can't create the materia" << std::endl;
	return (NULL);
}

/**
 * @brief Learns a new Materia if there is an empty slot.
 * 
 * Stores the given Materia in the first available slot.
 * 
 * @param materia Pointer to the Materia to learn.
 */
void MateriaSource::learnMateria( AMateria* materia )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->materias[i] && materia)
		{
			this->materias[i] = materia;
			std::cout << "The materia " << materia->getType() << " has been learned" << std::endl;
			return ;
		}
	}
	std::cout << "The Materia can't be learned" << std::endl;
}

/**
 * @brief Assignment operator for MateriaSource.
 * 
 * Copies all Materia pointers from another MateriaSource.
 * 
 * @param before The MateriaSource object to copy from.
 * @return MateriaSource& Reference to this object.
 */
MateriaSource& MateriaSource::operator=( const MateriaSource& before )
{
	std::cout << "Copy MateriaSoure Assigment Operator called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = before.materias[i];
	return (*this);
}

/**
 * @brief Copy constructor for MateriaSource.
 * 
 * Initializes this object by copying another MateriaSource.
 * 
 * @param before The MateriaSource object to copy.
 */
MateriaSource::MateriaSource( const MateriaSource& before )
{
	std::cout << "Copy MateriaSource Constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for MateriaSource.
 * 
 * Initializes all materia slots to NULL.
 */
MateriaSource::MateriaSource( void )
{
	std::cout << "Default MateriaSource Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = NULL;
	
}

/**
 * @brief Destructor for MateriaSource.
 * 
 * Deletes all stored materias and frees resources.
 */
MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete materias[i];
	}
	std::cout << "Default MateriaSource Destructor called" << std::endl;
	
}
