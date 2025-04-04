/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:36:15 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:17 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound( void) const
{
	std::cout << "Guau" << std::endl;
}

std::string	Dog::getType( void ) const
{
	return (this->type);
}

Dog& Dog::operator=( const Dog& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

Dog::Dog( const Dog& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Default Dog Destructor" << std::endl;
}
