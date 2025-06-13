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
#include "Point.hpp"
#include <iostream>

/**
 * @brief Entry point for testing the bsp (point-in-triangle) function.
 * 
 * Initializes a triangle defined by three points (a, b, c) and tests whether
 * various points lie inside, outside, or on the border of the triangle.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main( void )
{
	Point	a(0, 0);
	Point	b(4, 0);
	Point	c(0, 3);

	Point	point(2, 0);
	Point	point2(5, 5);
	Point	point3(1, 1);

	std::cout << "In a border: " << bsp(a, b, c, point) << std::endl;
	std::cout << "Outside: "<< bsp(a, b, c, point2) << std::endl;
	std::cout << "Inside: " << bsp(a, b, c, point3) << std::endl;

	return 0;
}
