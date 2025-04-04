/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:36:22 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:25 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		void		setIdeas( std::string idea );
		void		printIdeas( void );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
		Dog& operator=( const Dog& before );
		Dog( const Dog& before );
		Dog( void );
		~Dog();
};
