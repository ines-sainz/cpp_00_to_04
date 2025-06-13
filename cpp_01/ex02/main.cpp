/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:29:31 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:29:32 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * @brief Demonstrates the use of a string, pointer, and reference.
 *
 * Creates a string variable, a pointer to that string, and a reference to
 * the same string. Prints their memory addresses and the values they point
 * to or refer to.
 *
 * @return int Exit status of the program.
 */
int	main(void)
{
	std::string	stringVAR = "HI THIS IS BRAIN";

	std::string	*stringPTR = &stringVAR;

	std::string	&stringREF = stringVAR;

	std::cout << "memory address of the string variable: " << &stringVAR << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "value of the string variable: " << stringVAR << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

}
