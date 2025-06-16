/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:35 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:37 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/**
 * @brief Makes a wrong cat sound.
 * 
 * Outputs a non-standard "miau" sound to the console.
 */
void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Miau" << std::endl;
}

/**
 * @brief Gets the type of the WrongCat.
 * 
 * @return std::string The type as a string.
 */
std::string	WrongCat::getType( void ) const
{
	return (this->type);
}

/**
 * @brief Copy assignment operator.
 * 
 * Assigns the type from another WrongCat.
 * 
 * @param before The WrongCat to copy from.
 * @return WrongCat& Reference to the assigned object.
 */
WrongCat& WrongCat::operator=( const WrongCat& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Initializes a new WrongCat as a copy of another.
 * 
 * @param before The WrongCat to copy.
 */
WrongCat::WrongCat( const WrongCat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

/**
 * @brief Default constructor.
 * 
 * Initializes a WrongCat with default type "WrongCat".
 */
WrongCat::WrongCat( void )
{
	std::cout << "Default WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
}

/**
 * @brief Destructor.
 * 
 * Called when the WrongCat object is destroyed.
 */
WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Destructor" << std::endl;
}
