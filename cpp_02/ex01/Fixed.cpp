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

float	Fixed::toFloat( void ) const
{
	float num;
	/*good*/num = ((float)this->fixedPointNumValue / (1 << Fixed::NumOfFractionalBits));
	/*bad num = static_cast<float>(roundf(this->fixedPointNumValue / (1 << Fixed::NumOfFractionalBits)));*/
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
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumValue = static_cast<int>(roundf(floatNum * (1 << Fixed::NumOfFractionalBits)));
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNumValue = integer << this->NumOfFractionalBits;
}

/*devuelve la representación del entero puro de el fixedPoint*/
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumValue);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointNumValue = raw;
}

Fixed& Fixed:: operator=(const Fixed& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixedPointNumValue = before.fixedPointNumValue;
	return (*this);
}

Fixed::Fixed(const Fixed& before)
{
	std::cout << "Copy constructor called" << std::endl;
	//*this = before;
	this->fixedPointNumValue = before.fixedPointNumValue;
	/*esta línea se puede poner en vez de la anterior para
	no llamar a el copy assigment operator. Hacen lo mismo*/
}


Fixed::Fixed( void )
{
	fixedPointNumValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* std::ostream &out es la salida por la que la info va a salir std::cout...
la salida de toFloat tiene que ser const*/
std::ostream& operator<<(std::ostream &out, Fixed const &classToPrint)
{
    out << classToPrint.toFloat();
    return (out);
}
