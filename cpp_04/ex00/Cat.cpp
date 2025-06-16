/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:35:59 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:00 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * @brief Makes a cat sound.
 * 
 * Overrides the base Animal sound with a cat-specific sound.
 */
void	Cat::makeSound( void ) const
{
	std::cout << "Miau" << std::endl;
}

/**
 * @brief Gets the type of the Cat.
 * 
 * @return std::string The type of the Cat.
 */
std::string	Cat::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator.
 * 
 * Copies the internal state from another Cat object.
 * 
 * @param before The Cat to copy from.
 * @return Cat& Reference to the assigned object.
 */
Cat& Cat::operator=( const Cat& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Creates a new Cat as a copy of another.
 * 
 * @param before The Cat to copy.
 */
Cat::Cat( const Cat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor.
 * 
 * Initializes the Cat with default values.
 */
Cat::Cat( void )
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
}

/**
 * @brief Destructor.
 * 
 * Called when the Cat object is destroyed.
 */
Cat::~Cat()
{
	std::cout << "Default Cat Destructor" << std::endl;
}
