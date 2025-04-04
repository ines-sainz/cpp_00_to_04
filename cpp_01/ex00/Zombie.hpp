/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:06:25 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:26 by isainz-r         ###   ########.fr       */
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
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
