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
