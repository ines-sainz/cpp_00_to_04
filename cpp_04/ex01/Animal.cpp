/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:35:40 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:35:42 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound( void ) const
{
	std::cout << "Noises" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

Animal& Animal::operator=( const Animal& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

Animal::Animal( const Animal& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

Animal::Animal( void )
{
	this->type = "Animal";
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal Destructor" << std::endl;
}
