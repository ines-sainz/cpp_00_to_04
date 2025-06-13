/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:35:18 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/16 11:35:20 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Converts the fixed-point value to a float.
 * 
 * @return float The floating-point representation of the value.
 */
float	Fixed::toFloat( void ) const
{
	float num;
	num = ((float)this->fixedPointNumValue / (1 << Fixed::NumOfFractionalBits));
	return (num);
}

/**
 * @brief Converts the fixed-point value to an integer.
 * 
 * @return int The integer representation of the value.
 */
int	Fixed::toInt( void ) const
{
	int num;
	num = this->fixedPointNumValue >> this->NumOfFractionalBits;
	return (num);
}

/**
 * @brief Constructs a Fixed object from a float.
 * 
 * @param floatNum The float value to convert and store.
 */
Fixed::Fixed(const float floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumValue = static_cast<int>(roundf(floatNum * (1 << Fixed::NumOfFractionalBits)));
}

/**
 * @brief Constructs a Fixed object from an integer.
 * 
 * @param integer The integer value to convert and store.
 */
Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNumValue = integer << this->NumOfFractionalBits;
}

/**
 * @brief Gets the raw fixed-point integer representation.
 * 
 * @return int The internal fixed-point integer value.
 */
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumValue);
}

/**
 * @brief Sets the raw fixed-point integer value directly.
 * 
 * @param raw The raw fixed-point integer to assign.
 */
void Fixed::setRawBits( int const raw )
{
	this->fixedPointNumValue = raw;
}

/**
 * @brief Copy assignment operator.
 * 
 * @param before The Fixed instance to copy from.
 * @return Fixed& Reference to the assigned Fixed object.
 */
Fixed& Fixed:: operator=(const Fixed& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixedPointNumValue = before.fixedPointNumValue;
	return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * @param before The Fixed instance to copy from.
 */
Fixed::Fixed(const Fixed& before)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNumValue = before.fixedPointNumValue;
}

/**
 * @brief Default constructor.
 * 
 * Initializes the fixed-point value to zero.
 */
Fixed::Fixed( void )
{
	fixedPointNumValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Destructor.
 * 
 * Outputs a message when the object is destroyed.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Overloads the << operator for outputting Fixed values.
 * 
 * @param out Output stream (e.g., std::cout).
 * @param classToPrint The Fixed object to print.
 * @return std::ostream& The output stream after printing.
 */
std::ostream& operator<<(std::ostream &out, Fixed const &classToPrint)
{
    out << classToPrint.toFloat();
    return (out);
}
