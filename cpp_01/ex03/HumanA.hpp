/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:40 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:42 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void attack( void );
};
