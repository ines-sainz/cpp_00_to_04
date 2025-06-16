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
 * @brief Sets all ideas in the Cat's Brain to the given idea.
 * 
 * @param idea The idea string to assign to all Brain slots.
 */
void	Cat::setIdeas( std::string idea )
{
	this->brain->setIdeas(idea);
}

/**
 * @brief Prints all the ideas stored in the Cat's Brain.
 */
void	Cat::printIdeas( void )
{
	this->brain->printIdeas();
}

/**
 * @brief Outputs the Cat's sound to the console.
 */
void	Cat::makeSound( void ) const
{
	std::cout << "Miau" << std::endl;
}

/**
 * @brief Returns the type of the Cat.
 * 
 * @return std::string The type of the Cat.
 */
std::string	Cat::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator for Cat.
 * 
 * Copies the type and creates a new copy of the Brain.
 * 
 * @param before The Cat instance to copy from.
 * @return Cat& Reference to the assigned Cat object.
 */
Cat& Cat::operator=( const Cat& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	this->brain = new Brain(*before.brain);
	return (*this);
}

/**
 * @brief Copy constructor for Cat.
 * 
 * Initializes a new Cat as a copy of another.
 * 
 * @param before The Cat instance to copy.
 */
Cat::Cat( const Cat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor for Cat.
 * 
 * Initializes type to "Cat" and allocates a new Brain.
 */
Cat::Cat( void )
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

/**
 * @brief Destructor for Cat.
 * 
 * Frees the dynamically allocated Brain.
 */
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Default Cat Destructor" << std::endl;
}
