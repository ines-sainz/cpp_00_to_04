/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:16:44 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 12:16:46 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/**
 * @brief Prints a debug level complaint message.
 */
void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	<< "pickle-specialketchup burger. I really do!" << std::endl;
}

/**
 * @brief Prints an info level complaint message.
 */
void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn't put enough bacon in my burger! If you did, "
	<< "I wouldn't be asking for more!" << std::endl;
}

/**
 * @brief Prints a warning level complaint message.
 */
void	Harl::warning ( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I've been coming for years whereas you started working here since last month." << std::endl;
}

/**
 * @brief Prints an error level complaint message.
 */
void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/**
 * @brief Calls the appropriate complaint method based on the level string.
 * 
 * Matches the input string to one of the levels and calls the corresponding
 * member function pointer. Prints an error if the level is invalid.
 * 
 * @param level The complaint level as a string ("DEBUG", "INFO", "WARNING", or "ERROR").
 */
void	Harl::complain( std::string level )
{
	void (Harl:: *functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++)
	{
		if (level == options[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Not a valid level." << std::endl;
}

/**
 * @brief Harl class constructor.
 *
 * Prints a message indicating the constructor was called.
 */
Harl::Harl( void )
{
	std::cout << "Harl Constructor" << std::endl;
}

/**
 * @brief Harl class destructor.
 *
 * Prints a message indicating the destructor was called.
 */
Harl::~Harl()
{
	std::cout << "Harl Destructor" << std::endl;
}
