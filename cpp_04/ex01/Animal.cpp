/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:35:40 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:35:42 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * @brief Makes a generic animal sound.
 * 
 * This method is meant to be overridden in derived classes.
 */
void	Animal::makeSound( void ) const
{
	std::cout << "Noises" << std::endl;
}

/**
 * @brief Gets the type of the animal.
 * 
 * @return std::string The type of the animal.
 */
std::string	Animal::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator.
 * 
 * Copies the internal state from another Animal object.
 * 
 * @param before The Animal to copy from.
 * @return Animal& Reference to the assigned object.
 */
Animal& Animal::operator=( const Animal& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Creates a new Animal as a copy of another.
 * 
 * @param before The Animal to copy.
 */
Animal::Animal( const Animal& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor.
 * 
 * Initializes the Animal with a default type.
 */
Animal::Animal( void )
{
	this->type = "Animal";
	std::cout << "Default Animal Constructor" << std::endl;
}

/**
 * @brief Destructor.
 * 
 * Called when the Animal object is destroyed.
 */
Animal::~Animal()
{
	std::cout << "Default Animal Destructor" << std::endl;
}
