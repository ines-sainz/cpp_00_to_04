/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:26:42 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:26:44 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		/* data */
	public:
		void	highFivesGuys( void );
		FragTrap( std::string name );
		FragTrap& operator=(const FragTrap& before);
		FragTrap(const FragTrap& before);
		FragTrap( void );
		~FragTrap();
};
