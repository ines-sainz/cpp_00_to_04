/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:27 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:29 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		void	makeSound( void ) const;
		virtual std::string	getType( void ) const;
		WrongAnimal& operator=( const WrongAnimal& before );
		WrongAnimal( const WrongAnimal& before );
		WrongAnimal( void );
		virtual ~WrongAnimal();
};
