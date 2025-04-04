/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:27:00 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:27:04 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	person1("Person1");
	ScavTrap	person2("Person2");
	FragTrap	person3("Person3");

	person1.attack("someone");
	person1.beRepaired(1);

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.guardGate();

	std::cout << "\n";

	person3.attack("someone");
	person3.beRepaired(1);
	person3.highFivesGuys();
}
