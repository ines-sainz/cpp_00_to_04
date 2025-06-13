/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:29:07 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 12:29:09 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a horde of Zombies with the given name.
 *
 * Allocates an array of N Zombies, assigns the given name to each,
 * makes them announce themselves, and returns a pointer to the array.
 *
 * @param N The number of Zombies to create.
 * @param name The name to assign to each Zombie.
 * @return Zombie* Pointer to the dynamically allocated Zombie array,
 *         or NULL if N <= 0.
 */
Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *new_zombie = new Zombie[N];
	for (size_t i = 0; i < N; i++)
	{
		new_zombie[i].put_name(name);
		new_zombie[i].announce();
	}
	return (new_zombie);
}
