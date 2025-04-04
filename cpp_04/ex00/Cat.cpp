/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:35:59 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:00 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound( void ) const
{
	std::cout << "Miau" << std::endl;
}

std::string	Cat::getType( void ) const
{
	return (this->type);
}

Cat& Cat::operator=( const Cat& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

Cat::Cat( const Cat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

Cat::Cat( void )
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat Destructor" << std::endl;
}