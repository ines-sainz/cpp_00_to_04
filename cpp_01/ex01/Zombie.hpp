/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:29:20 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 12:29:23 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string.h>
# include <ctype.h>
# include <sstream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie( void );
		~Zombie( void );
		void announce( void );
		void put_name( std::string name );
};

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );

#endif
