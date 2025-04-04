/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:44:01 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 16:44:03 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		void	setIdeas( std::string idea );
		void	printIdeas( void );
		Brain& operator=( const Brain& before );
		Brain( const Brain& before );
		Brain( void );
		~Brain();
};
