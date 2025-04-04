/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:58 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:51:00 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	
	public:
		HumanB( std::string name );
		~HumanB( void );
		void attack( void );
		void setWeapon(Weapon& weapon);
};
