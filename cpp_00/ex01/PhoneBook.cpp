/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:29:13 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/02 18:29:15 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook:: check_input(std::string input)
{
	size_t	i;
	int number;
	std::string search_index;

	i = 0;
	if (input == "ADD")
	{
		if (person[n_contact % 8].add_contact(&n_contact) == 1)
			return (1);
		this->n_contact++;
		std::cout << "N_CONTAC: " <<n_contact <<std::endl;
	}
	else if (input == "SEARCH")
	{
		while (i < n_contact && i < 8)
		{
			person[(i) % 8].print_contact(i);
			i++;
		}
		std::cout << "    Enter index: ";
		std::getline(std::cin, search_index);
		if (std::cin.eof())
		{
			std::cout << "\nEmpty" << input <<std::endl;
			return (1);
		}
		std::stringstream index_new(search_index);
		index_new >> (number);
		if (!(number > 0 && number <= 8) || number > n_contact)
		{
			std::cout << "Wrong index" <<std::endl;
			return (0);
		}
		person[(number - 1) % 8].print_all_contact();
	}
	else if (input == "EXIT")
		return (1);
	return (0);
}

PhoneBook::PhoneBook(void)
{
	this->n_contact = 0;
	std::cout << "PhoneBook Constructor" <<std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor" <<std::endl;
}
