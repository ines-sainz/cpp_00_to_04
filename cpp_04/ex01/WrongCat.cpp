/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:35 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:37 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Miau" << std::endl;
}

std::string	WrongCat::getType( void ) const
{
	return (this->type);
}

WrongCat& WrongCat::operator=( const WrongCat& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

WrongCat::WrongCat( const WrongCat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

WrongCat::WrongCat( void )
{
	std::cout << "Default WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Destructor" << std::endl;
}
