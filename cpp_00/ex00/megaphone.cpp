/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:55 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/02 16:15:57 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <ctype.h>

/**
 * @brief Entry point of the program.
 *
 * Iterates through command-line arguments (if any), converts them to
 * uppercase, and prints the result. If no arguments are provided, a default
 * message is displayed.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 * @return int Exit status of the program. Returns 0 on successful execution.
 */
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			len = strlen(argv[i]);
			while (j < len)
			{
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
