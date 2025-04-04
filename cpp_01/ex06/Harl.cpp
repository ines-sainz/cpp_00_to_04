/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:02:17 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 17:02:19 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
	<< "-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn't put enough bacon in my burger! If you did, "
	<< "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas you started working here since"
	<< " last month." << std::endl;
}

void Harl:: error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complainFilter( std::string level)
{
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levels[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	filter;

	filter = -1;
	for (size_t i = 0; i < 4; i++)
	{
		if (level == options[i])
		{
			std::cout << "[" << options[i] << "]" << std::endl;
			filter = i;
		}
	}
	switch (filter)
	{
		case 0:
			(this->*levels[0])();
		case 1:
			(this->*levels[1])();
		case 2:
			(this->*levels[2])();
		case 3:
			(this->*levels[3])();
			break ;
		default:
			std::cout << "Not a valid filter" << std::endl;
			break ;
	}
	
}

Harl::Harl( void )
{
}

Harl::~Harl()
{
}
