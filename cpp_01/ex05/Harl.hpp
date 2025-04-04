/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:16:51 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/13 12:16:53 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning ( void );
		void	error( void );

	public:
		Harl( void );
		~Harl();
		void	complain( std::string level );

};
