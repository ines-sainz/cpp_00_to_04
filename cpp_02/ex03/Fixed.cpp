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

Fixed&	Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1.fixedPointNumValue < num2.fixedPointNumValue)
		return (num1);
	return (num2);
}

Fixed&	Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1.fixedPointNumValue < num2.fixedPointNumValue)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

Fixed&	Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1.fixedPointNumValue > num2.fixedPointNumValue)
		return (num1);
	return (num2);
}

Fixed&	Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1.fixedPointNumValue > num2.fixedPointNumValue)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

Fixed&	Fixed::operator++(void)
{
	this->fixedPointNumValue += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tempPostDecrement = (*this);

	this->fixedPointNumValue += 1;
	return (tempPostDecrement);
}

Fixed&	Fixed::operator--(void)
{
	this->fixedPointNumValue -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	*tempPostDecrement = this;

	tempPostDecrement->fixedPointNumValue = this->fixedPointNumValue;
	this->fixedPointNumValue -= 1;
	return (*tempPostDecrement);
}

Fixed	Fixed::operator+(const Fixed& toOperate)
{
	return(this->toFloat() + toOperate.toFloat());
}

Fixed	Fixed::operator-(const Fixed& toOperate)
{
	return(this->toFloat() - toOperate.toFloat());
}

Fixed	Fixed::operator*(const Fixed& toOperate)
{
	return(this->toFloat() * toOperate.toFloat());
}

Fixed	Fixed::operator/(const Fixed& toOperate)
{
	return(this->toFloat() / toOperate.toFloat());
}

bool	Fixed::operator>(const Fixed& toCompare)
{
	if (this->fixedPointNumValue > toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed& toCompare)
{
	if (this->fixedPointNumValue < toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue >= toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue <= toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed& toCompare)
{
	if (this->fixedPointNumValue == toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

bool	Fixed::operator!=(const Fixed& toCompare)
{
	if (this->fixedPointNumValue != toCompare.fixedPointNumValue)
		return (1);
	return (0);
}

float	Fixed::toFloat( void ) const
{
	float num;
	num = ((float)this->fixedPointNumValue / (1 << Fixed::NumOfFractionalBits));
	return (num);
}

int	Fixed::toInt( void ) const
{
	int num;
	num = this->fixedPointNumValue >> this->NumOfFractionalBits;
	return (num);
}

Fixed::Fixed(const float floatNum)
{
//	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumValue = static_cast<int>(roundf(floatNum * (1 << Fixed::NumOfFractionalBits)));
}

Fixed::Fixed(const int integer)
{
//	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNumValue = integer << this->NumOfFractionalBits;
}

int Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumValue);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointNumValue = raw;
}

Fixed& Fixed:: operator=(const Fixed& before)
{
//	std::cout << "Copy assigment operator called" << std::endl;
	this->fixedPointNumValue = before.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& before)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNumValue = before.fixedPointNumValue;
}


Fixed::Fixed( void )
{
	fixedPointNumValue = 0;
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Fixed const &classToPrint)
{
    out << classToPrint.toFloat();
    return (out);
}
