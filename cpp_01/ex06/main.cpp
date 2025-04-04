/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:02:30 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 17:02:32 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{

	Harl	harl;

	harl.complainFilter("DEBUG");
	std::cout << "\n";
	harl.complainFilter("INFO");
	std::cout << "\n";
	harl.complainFilter("WARNING");
	std::cout << "\n";
	harl.complainFilter("ERROR");
	std::cout << "\n";
	harl.complainFilter("");
	std::cout << "\n";
}
