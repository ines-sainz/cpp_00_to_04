/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:43:53 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:43:55 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/**
 * @brief Sets the same idea string to all elements in the ideas array.
 * 
 * @param idea The idea string to be assigned to each slot.
 */
void	Brain::setIdeas( std::string idea )
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

/**
 * @brief Prints all ideas stored in the Brain.
 * 
 * Outputs each idea in the array to the standard output.
 */
void	Brain::printIdeas( void )
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}

/**
 * @brief Copy assignment operator for Brain.
 * 
 * Copies each element from another Brain's ideas array.
 * 
 * @param before The Brain instance to copy from.
 * @return Brain& Reference to the assigned Brain object.
 */
Brain& Brain::operator=( const Brain& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = before.ideas[i];
	return (*this);
}

/**
 * @brief Copy constructor for Brain.
 * 
 * Initializes a new Brain as a copy of an existing one.
 * 
 * @param before The Brain instance to copy.
 */
Brain::Brain( const Brain& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for Brain.
 * 
 * Initializes the ideas array with a default message.
 */
Brain::Brain( void )
{
	std::cout << "Default Brain Constructor Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Had an idea";
	
}

/**
 * @brief Destructor for Brain.
 * 
 * Outputs a message when a Brain instance is destroyed.
 */
Brain::~Brain()
{
	std::cout << "Default Brain Destructor Called" << std::endl;
}
