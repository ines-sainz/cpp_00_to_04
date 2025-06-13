/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:59 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:01 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a new Zombie on the heap.
 *
 * Allocates a new Zombie object with the given name and returns its pointer.
 *
 * @param name The name of the zombie.
 * @return Zombie* Pointer to the newly created Zombie.
 */
Zombie*	newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}
