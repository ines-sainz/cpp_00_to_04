/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:16:58 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 12:17:01 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << "\n";
	harl.complain("INFO");
	std::cout << "\n";
	harl.complain("WARNING");
	std::cout << "\n";
	harl.complain("ERROR");
	std::cout << "\n";
	harl.complain("");
	std::cout << "\n";
}
