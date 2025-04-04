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

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	<< "pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn't put enough bacon in my burger! If you did, "
	<< "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning ( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	/*functions es un array de punteros de miembros de la función Harl que devuelven void y necesitan void*/
	void (Harl:: *functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++)
	{
		if (level == options[i])
		{
			/*como queremos activar la función que hemos guardado en el punterro de funciones la llamamos.
			llamas al puntero de la función functions en la posición i con ningún argumento.
			Como la función hecesita saber de dónde la tiene que buscar, en este caso en harl tienes que
			ponerle el this para que lo busque dentro de la clase
			
			puedes usar Harl harlActivator;      (harlActivator.*functions[i])() pero estás creando un 
			constructor harl cada vez para simplemente usar la función. Generalmente para otros constructores.*/
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Not a valid level." << std::endl;
}

Harl::Harl( void )
{
	std::cout << "Harl Constructor" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl Destructor" << std::endl;
}
