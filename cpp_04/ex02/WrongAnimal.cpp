/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:20 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:22 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/**
 * @brief Makes a generic wrong animal sound.
 * 
 * Outputs a default "wrong" sound to the console.
 */
void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Noises" << std::endl;
}

/**
 * @brief Gets the type of the WrongAnimal.
 * 
 * @return std::string The type as a string.
 */
std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator.
 * 
 * Assigns the type from another WrongAnimal.
 * 
 * @param before The WrongAnimal to copy from.
 * @return WrongAnimal& Reference to the assigned object.
 */
WrongAnimal& WrongAnimal::operator=( const WrongAnimal& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Initializes a new WrongAnimal as a copy of another.
 * 
 * @param before The WrongAnimal to copy.
 */
WrongAnimal::WrongAnimal( const WrongAnimal& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor.
 * 
 * Initializes a WrongAnimal with default type.
 */
WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << "Default WrongAnimal Constructor" << std::endl;
}

/**
 * @brief Destructor.
 * 
 * Called when the WrongAnimal object is destroyed.
 */
WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor" << std::endl;
}
