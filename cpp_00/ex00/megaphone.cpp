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
