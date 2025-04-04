/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:27:30 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:27:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		/* data */
	public:
		void	guardGate();
		void	attack(const std::string& target);
		ScavTrap& operator=(const ScavTrap& before);
		ScavTrap(const ScavTrap& before);
		ScavTrap( std::string name );
		ScavTrap( void );
		~ScavTrap();
};

