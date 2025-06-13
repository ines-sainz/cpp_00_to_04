/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:25:15 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:25:19 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/**
 * @brief Entry point of the program.
 * 
 * Demonstrates the functionality of ClapTrap and ScavTrap objects.
 * It tests attacking, repairing, and the ScavTrap's gate keeper mode.
 * 
 * @return int Exit status code.
 */
int main()
{
	ClapTrap	person1("Person1");
	ScavTrap	person2("Person2");

	person1.attack("someone");
	person1.beRepaired(1);
	person1.attack("someone");
	person1.beRepaired(1);

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.guardGate();
}
