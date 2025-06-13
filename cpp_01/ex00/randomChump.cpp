/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:06:07 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:09 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a Zombie on the stack and makes it announce itself.
 *
 * Instantiates a temporary Zombie object with the given name and calls its
 * announce() method immediately.
 *
 * @param name The name of the zombie.
 */
void randomChump( std::string name )
{
	Zombie new_zombie = Zombie(name);

	new_zombie.announce();
}
