/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:23:52 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:23:56 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Main function demonstrating the behavior of the ClapTrap class.
 *
 * This function creates two ClapTrap objects and simulates various actions
 * such as attacking, taking damage, and repairing. The output shows how each
 * ClapTrap reacts to these actions based on their internal state.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
	ClapTrap	person1("Person1");
	ClapTrap	person2("Person2");

	person1.attack("someone");
	person1.takeDamage(5);
	person1.takeDamage(7);
	person1.beRepaired(3);
	person1.attack("someone");

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(2);
	person2.attack("otherone");
	person2.beRepaired(3);
}
