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
	this->fixedPointNumValue = before.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
	//this->fixedPointNumValue = before.getRawBits();
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
