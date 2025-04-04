/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:20 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:22 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Noises" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << "Default WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor" << std::endl;
}

