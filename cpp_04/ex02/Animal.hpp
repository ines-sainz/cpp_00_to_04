/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:35:50 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:35:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		virtual	void	makeSound( void ) const = 0; 
		/*now it's pure virtual making the class abstract
		which means it can't be instantiable but you can
		have derived classes*/
		virtual std::string	getType( void ) const;
		Animal& operator=( const Animal& before );
		Animal( const Animal& before );
		Animal( void );
		virtual ~Animal();
};
