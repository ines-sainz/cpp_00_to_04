/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:53:32 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/09 10:53:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	void	whoAmI();
	DiamondTrap& operator=( const DiamondTrap& before );
	DiamondTrap( const DiamondTrap& before );
	DiamondTrap(std::string name);
	DiamondTrap( void );
	~DiamondTrap();
};
