/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:28:43 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 12:28:45 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Entry point of the program.
 *
 * Creates a horde of 5 Zombies named "a_zombie", makes each Zombie
 * announce itself, and then properly deallocates the dynamically
 * allocated memory for the Zombie horde.
 *
 * @return int Exit status of the program.
 */
int	main(void)
{
	Zombie	*zombies;
	int i = 0;

	zombies = zombieHorde(5, "a_zombie");
	std::cout  << "\n";
	std::cout  << "\n";
	while (i < 5)
	{
		std::cout << i << ":  ";
		zombies[i].announce();
		i++;
	}
	std::cout  << "\n";
	std::cout  << "\n";
	delete[] (zombies);
}
