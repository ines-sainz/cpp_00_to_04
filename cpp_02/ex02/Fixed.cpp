/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:09:35 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:36 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Returns the minimum of two Fixed references.
 * 
 * @param num1 First Fixed reference.
 * @param num2 Second Fixed reference.
 * @return Fixed& Reference to the smaller Fixed.
 */
Fixed&	Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1.fixedPointNumValue < num2.fixedPointNumValue)
		return (num1);
	return (num2);
}

/**
 * @brief Returns the minimum of two constant Fixed references.
 * 
 * @param num1 First constant Fixed reference.
 * @param num2 Second constant Fixed reference.
 * @return Fixed& Reference to the smaller Fixed.
 */
Fixed&	Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1.fixedPointNumValue < num2.fixedPointNumValue)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

/**
 * @brief Returns the maximum of two Fixed references.
 * 
 * @param num1 First Fixed reference.
 * @param num2 Second Fixed reference.
 * @return Fixed& Reference to the larger Fixed.
 */
Fixed&	Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1.fixedPointNumValue > num2.fixedPointNumValue)
		return (num1);
	return (num2);
}

/**
 * @brief Returns the maximum of two constant Fixed references.
 * 
 * @param num1 First constant Fixed reference.
 * @param num2 Second constant Fixed reference.
 * @return Fixed& Reference to the larger Fixed.
 */
Fixed&	Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1.fixedPointNumValue > num2.fixedPointNumValue)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

/**
 * @brief Prefix increment operator.
 * 
 * @return Fixed& Reference to incremented Fixed.
 */
Fixed&	Fixed::operator++(void)
{
	this->fixedPointNumValue += 1;
	return (*this);
}

/**
 * @brief Postfix increment operator.
 * 
 * @return Fixed Value before increment.
 */
Fixed	Fixed::operator++(int)
{
	Fixed	tempPostDecrement = (*this);

	this->fixedPointNumValue += 1;
	return (tempPostDecrement);
}

/**
 * @brief Prefix decrement operator.
 * 
 * @return Fixed& Reference to decremented Fixed.
 */
Fixed&	Fixed::operator--(void)
{
	this->fixedPointNumValue -= 1;
	return (*this);
}

/**
 * @brief Postfix decrement operator.
 * 
 * @return Fixed Value before decrement.
 */
Fixed	Fixed::operator--(int)
{
	Fixed	*tempPostDecrement = this;

	tempPostDecrement->fixedPointNumValue = this->fixedPointNumValue;
	this->fixedPointNumValue -= 1;
	return (*tempPostDecrement);
}

/**
 * @brief Addition operator for Fixed objects.
 * 
 * @param toOperate Fixed to add.
 * @return Fixed Result of addition.
 */
Fixed	Fixed::operator+(const Fixed& toOperate)
{
	return(this->toFloat() + toOperate.toFloat());
}

/**
 * @brief Subtraction operator for Fixed objects.
 * 
 * @param toOperate Fixed to subtract.
 * @return Fixed Result of subtraction.
 */
Fixed	Fixed::operator-(const Fixed& toOperate)
{
	return(this->toFloat() - toOperate.toFloat());
}

/**
 * @brief Multiplication operator for Fixed objects.
 * 
 * @param toOperate Fixed to multiply.
 * @return Fixed Result of multiplication.
 */
Fixed	Fixed::operator*(const Fixed& toOperate)
{
	return(this->toFloat() * toOperate.toFloat());
}

/**
 * @brief Division operator for Fixed objects.
 * 
 * @param toOperate Fixed to divide by.
 * @return Fixed Result of division.
 */
Fixed	Fixed::operator/(const Fixed& toOperate)
{
	return(this->toFloat() / toOperate.toFloat());
}

/**
 * @brief Greater-than comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if this > toCompare.
 * @return false otherwise.
 */
bool	Fixed::operator>(const Fixed& toCompare)
{
	if (this->fixedPointNumValue > toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Less-than comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if this < toCompare.
 * @return false otherwise.
 */
bool	Fixed::operator<(const Fixed& toCompare)
{
	if (this->fixedPointNumValue < toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Greater-than-or-equal comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if this >= toCompare.
 * @return false otherwise.
 */
bool	Fixed::operator>=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue >= toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Less-than-or-equal comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if this <= toCompare.
 * @return false otherwise.
 */
bool	Fixed::operator<=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue <= toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Equality comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if equal.
 * @return false otherwise.
 */
bool	Fixed::operator==(const Fixed& toCompare)
{
	if (this->fixedPointNumValue == toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Inequality comparison operator.
 * 
 * @param toCompare Fixed to compare.
 * @return true if not equal.
 * @return false otherwise.
 */
bool	Fixed::operator!=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue != toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

/**
 * @brief Converts the fixed-point value to float.
 * 
 * @return float The floating point representation.
 */
float	Fixed::toFloat( void ) const
{
	float num;
	num = ((float)this->fixedPointNumValue / (1 << Fixed::NumOfFractionalBits));
	return (num);
}

/**
 * @brief Converts the fixed-point value to int.
 * 
 * @return int The integer representation.
 */
int	Fixed::toInt( void ) const
{
	int num;
	num = this->fixedPointNumValue >> this->NumOfFractionalBits;
	return (num);
}

/**
 * @brief Constructor that takes a float value.
 * 
 * @param floatNum Float number to convert.
 */
Fixed::Fixed(const float floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumValue = static_cast<int>(roundf(floatNum * (1 << Fixed::NumOfFractionalBits)));
}

/**
 * @brief Constructor that takes an integer value.
 * 
 * @param integer Integer number to convert.
 */
Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNumValue = integer << this->NumOfFractionalBits;
}

/**
 * @brief Gets the raw fixed-point value.
 * 
 * @return int The raw integer value.
 */
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumValue);
}

/**
 * @brief Sets the raw fixed-point value.
 * 
 * @param raw Integer to set.
 */
void Fixed::setRawBits( int const raw )
{
	this->fixedPointNumValue = raw;
}

/**
 * @brief Assignment operator overload.
 * 
 * @param before Fixed object to copy.
 * @return Fixed& Reference to the current object.
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
 * @param before Fixed object to copy.
 */
Fixed::Fixed(const Fixed& before)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNumValue = before.fixedPointNumValue;
}

/**
 * @brief Default constructor.
 */
Fixed::Fixed( void )
{
	fixedPointNumValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Destructor.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Overload of stream insertion operator for Fixed.
 * 
 * @param out Output stream.
 * @param classToPrint Fixed to print.
 * @return std::ostream& Reference to the output stream.
 */
std::ostream& operator<<(std::ostream &out, Fixed const &classToPrint)
{
    out << classToPrint.toFloat();
    return (out);
}
