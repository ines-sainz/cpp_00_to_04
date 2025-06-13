/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:09:49 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:51 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/**
 * @brief Entry point of the program demonstrating Fixed class operations.
 * 
 * This function creates and manipulates instances of the Fixed class to 
 * demonstrate arithmetic, increment operators, and max comparisons.
 * 
 * @return int Exit status.
 */
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	/*Fixed	num1(6);
	Fixed	num2(2);
	int i = 1;

	std::cout << "multiplication" << num1.operator*(num2) << std::endl;
	std::cout << "division" << num1.operator/(num2) << std::endl;
	std::cout << "sum" << num1.operator+(num2) << std::endl;
	std::cout << "resta" << num1.operator-(num2) << std::endl;
	std::cout << "mayor que" << num1.operator>(num2) << std::endl;
	std::cout << "menor que" << num1.operator<(num2) << std::endl;
	std::cout << "mayor o igual" << num1.operator>=(num2) << std::endl;
	std::cout << "menor o igual" << num1.operator<=(num2) << std::endl;
	std::cout << "igual igual" << num1.operator==(num2) << std::endl;
	std::cout << "distinto de" << num1.operator!=(num2) << std::endl;
	std::cout << "++a" << num1.operator++() << std::endl;
	std::cout << "a++" << num1.operator++(i) << std::endl;
	std::cout << "--a" << num1.operator--() << std::endl;
	std::cout << "a--" << num1.operator--(i) << std::endl;
	std::cout << "max" << num1.max(num1, num2) << std::endl;
	std::cout << "min" << num1.min(num1, num2) << std::endl;
	*/

	return 0;
}
