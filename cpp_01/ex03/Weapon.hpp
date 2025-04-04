/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:51:35 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:51:37 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string& getType(void);
		void setType(std::string type);
};
