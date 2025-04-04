/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:02:24 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 17:02:25 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		void complainFilter( std::string level );
		Harl( void );
		~Harl();
};
