/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:43:45 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 09:43:50 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact:: print_all_contact(void)
{
	std::cout << "First_name: " << this->first_name <<std::endl;
	std::cout << "Last_name: " << this->last_name <<std::endl;
	std::cout << "Nickname: " << this->nickname <<std::endl;
	std::cout << "Phone_number: " << this->phone_number <<std::endl;
	std::cout << "Dark_secret: " << this->dark_secret <<std::endl;
}

void Contact:: print_col(std::string str,  int len_str)
{
	int spaces;
	int j = 0;
	int i = 0;

	spaces = 10 - len_str;
	while (i < spaces)
	{
		std::cout << " ";
		i++;
	}
	while (j < 9 && j < len_str)
	{
		std::cout << str[j++];
	}
	if (len_str >= 10)
		std::cout << ".";
}

void Contact:: print_contact(int i)
{
	std::stringstream index;

	index << (i +  1);
	print_col(index.str(), 1);
	std::cout << "|";
	print_col(this->first_name, first_name.length());
	std::cout << "|";
	print_col(this->last_name, last_name.length());
	std::cout << "|";
	print_col(this->nickname, nickname.length());
	std::cout << "\n";
}

int	Contact:: check_phone(const char *number)
{
	int i;

	if (strlen(number) != 9)
	{
		std::cout << "Wrong phone number" <<std::endl;
		return(1);
	}
	i = 0;
	while (number[i] != '\0')
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
		{
			std::cout << "Wrong phone number" <<std::endl;
			return (1);
		}
		i++;
	}
	this->phone_number = atol(number);
	return (0);
}

int	Contact:: add_contact(int *n_contact)
{
	std::string	input[5];
	std::string	types[5];

	types[0] = "    First_name";
	types[1] = "    Last_name";
	types[2] = "    Nickname";
	types[3] = "    Phone_number";
	types[4] = "    Dark_secret";
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << types[i] << ": ";
		std::getline(std::cin, input[i]);
		if (std::cin.eof())
		{
			std::cout << "\nEOF" <<std::endl;
			return (1);
		}
		if (input[i].empty())
		{
			std::cout << "Empty contact info" <<std::endl;
			(*n_contact)--;
			return (0);
		}
		if (i == 3)
		{
			if (check_phone(input[3].c_str()) == 1)
			{
				(*n_contact)--;
				return (0);
			}
		}
	}
	this->first_name = input[0];
	this->last_name = input[1];
	this->nickname = input[2];
	this->dark_secret = input[4];
	return (0);
}

void	Contact:: set_info(std::string first_name, std::string last_name, std::string nickname, long phone_number, std::string dark_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->dark_secret = dark_secret;
}

Contact::Contact(void)
{
	std::cout << "Contact Constructor" <<std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor" <<std::endl;
}
