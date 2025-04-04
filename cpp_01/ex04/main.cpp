/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:25:47 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/12 18:25:49 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int main(int argc, char **argv)
{
	std::ifstream	toRead;
	std::ofstream	toWrite;
	std::string		outFileName;

	if (argc == 4)
	{
		outFileName = std::string(argv[1]) + std::string(".replace");
		toRead.open(argv[1], std::ios::in);
		if (!toRead.is_open())
		{
			std::cout << "Can't read file" << std::endl;
			return (1);
		}
		toWrite.open(outFileName, std::ios::out);
		if (!toWrite)
		{
			toRead.close();
			std::cout << "Can't open writing file"<< std::endl;
			return (1);
		}

		std::string	lines;
		size_t		ocurrence;
		size_t		len_argv_3 = std::string(argv[3]).length();
		while (std::getline(toRead, lines))
		{
			ocurrence = 0;
			while (1)
			{
				ocurrence = lines.find(argv[2], ocurrence);
				if (ocurrence == std::string::npos)
					break ;
				if (argv[2][0])
				{
					lines.erase(ocurrence, std::string(argv[2]).length());
					lines.insert(ocurrence, argv[3]);
					ocurrence += std::string(argv[3]).length();
				}
			}
			toWrite << lines;
			if (!toRead.eof())
				toWrite << std::endl;
		}

		toRead.close();
		toWrite.close();
		return (0);
	}
	return (0);
}
