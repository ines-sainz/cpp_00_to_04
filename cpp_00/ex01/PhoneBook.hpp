/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:03 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/02 18:55:06 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string.h>
# include <ctype.h>
# include <sstream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		long	phone_number;
		std::string	dark_secret;
	
	public:
		Contact(void);
		~Contact(void);
		int	add_contact(int *n_contact);
		int	check_phone(const char *number);
		void print_contact(int i);
		void print_all_contact(void);
		void print_col(std::string str, int len_str);
		void set_info(std::string first_name, std::string last_name,
			std::string nickname, long phone_number,
			std::string dark_secret);
};

class PhoneBook
{
	private:
		Contact	person[8];

	public:
		int n_contact;
	
		PhoneBook(void);
		~PhoneBook(void);

		int	check_input(std::string input);
};


#endif
