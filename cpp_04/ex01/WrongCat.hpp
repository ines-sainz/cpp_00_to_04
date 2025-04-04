/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:49 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:53 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;

	public:
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		WrongCat& operator=( const WrongCat& before );
		WrongCat( const WrongCat& before );
		WrongCat( void );
		~WrongCat();
};
