/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:39:53 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/03 14:39:56 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phone_book;
	std::string	input;

	while (1)
	{
		std::cout << "Enter line: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nEmpty" << input <<std::endl;
			break ;
		}
		if (phone_book.check_input(input) == 1)
			return (1);
	}
	return (0);
}
