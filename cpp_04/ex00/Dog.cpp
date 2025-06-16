/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:36:15 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:17 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**
 * @brief Makes a dog sound.
 * 
 * Overrides the base Animal sound with a dog-specific sound.
 */
void	Dog::makeSound( void) const
{
	std::cout << "Guau" << std::endl;
}

/**
 * @brief Gets the type of the Dog.
 * 
 * @return std::string The type of the Dog.
 */
std::string	Dog::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator.
 * 
 * Copies the internal state from another Dog object.
 * 
 * @param before The Dog to copy from.
 * @return Dog& Reference to the assigned object.
 */
Dog& Dog::operator=( const Dog& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Creates a new Dog as a copy of another.
 * 
 * @param before The Dog to copy.
 */
Dog::Dog( const Dog& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor.
 * 
 * Initializes the Dog with default values.
 */
Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

/**
 * @brief Destructor.
 * 
 * Called when the Dog object is destroyed.
 */
Dog::~Dog()
{
	std::cout << "Default Dog Destructor" << std::endl;
}
