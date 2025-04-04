/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:36:05 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:07 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;

	public:
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Cat& operator=( const Cat& before );
		Cat( const Cat& before );
		Cat( void );
		~Cat();
};
