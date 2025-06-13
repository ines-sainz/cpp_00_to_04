/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:45 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:05:46 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Entry point of the program.
 *
 * Creates a zombie using newZombie(), makes it announce itself, then deletes it.
 * Also creates another zombie with randomChump() which announces itself immediately.
 *
 * @return int Exit status of the program.
 */
int	main(void)
{
	Zombie	*zombie_1;
	
	zombie_1 = newZombie("Zombie_1");
	zombie_1->announce();
	delete (zombie_1);
	std::cout  << "\n";
	randomChump("zombie_3");
}
