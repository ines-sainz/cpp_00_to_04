/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:26:42 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/16 09:26:45 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Returns the raw integer representation of the fixed-point value.
 * 
 * This function returns the internal fixed-point number stored as an int.
 * 
 * @return The raw integer value of the fixed-point number.
 */
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumValue);
}

/**
 * @brief Sets the raw integer representation of the fixed-point value.
 * 
 * Assigns the given integer to the internal fixed-point number.
 * 
 * @param raw The raw integer value to set.
 */
void Fixed::setRawBits( int const raw )
{
	this->fixedPointNumValue = raw;
}

/**
 * @brief Copy assignment operator overload.
 * 
 * Copies the fixed-point raw value from another Fixed object.
 * 
 * @param before The Fixed object to copy from.
 * @return Reference to this Fixed object.
 */
Fixed& Fixed:: operator=(const Fixed& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixedPointNumValue = before.getRawBits();
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Creates a new Fixed object as a copy of an existing one.
 * 
 * @param before The Fixed object to copy from.
 */
Fixed::Fixed(const Fixed& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
	//this->fixedPointNumValue = before.getRawBits();
	/* This line could replace the above to avoid calling the copy 
	   assignment operator. Both do the same. */
}

/**
 * @brief Default constructor.
 * 
 * Initializes the fixed-point number to zero.
 */
Fixed::Fixed( void )
{
	fixedPointNumValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Destructor.
 * 
 * Called when the Fixed object is destroyed.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
