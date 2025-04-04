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
