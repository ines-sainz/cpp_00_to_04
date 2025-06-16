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
 * @brief Sets all ideas in the Dog's Brain to the given idea.
 * 
 * @param idea The string to assign to each Brain slot.
 */
void	Dog::setIdeas( std::string idea )
{
	this->brain->setIdeas(idea);
}

/**
 * @brief Prints all the ideas stored in the Dog's Brain.
 */
void	Dog::printIdeas( void )
{
	this->brain->printIdeas();
}

/**
 * @brief Outputs the Dog's characteristic sound.
 */
void	Dog::makeSound( void) const
{
	std::cout << "Guau" << std::endl;
}

/**
 * @brief Gets the type of the Dog.
 * 
 * @return std::string The Dog's type.
 */
std::string	Dog::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator for Dog.
 * 
 * Duplicates the Dog's type and creates a deep copy of the Brain.
 * 
 * @param before The Dog to copy from.
 * @return Dog& Reference to the updated Dog.
 */
Dog& Dog::operator=( const Dog& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	this->brain = new Brain(*before.brain);
	return (*this);
}

/**
 * @brief Copy constructor for Dog.
 * 
 * Creates a new Dog object as a copy of another Dog.
 * 
 * @param before The Dog to copy from.
 */
Dog::Dog( const Dog& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for Dog.
 * 
 * Initializes the Dog type and allocates a new Brain.
 */
Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

/**
 * @brief Destructor for Dog.
 * 
 * Frees the allocated Brain memory and logs destruction.
 */
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default Dog Destructor" << std::endl;
}
