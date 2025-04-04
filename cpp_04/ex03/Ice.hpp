/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:22:30 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:22:34 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	/*private:
		std::string type;*/

	public:
		virtual void use( ICharacter& target );
		virtual AMateria* clone() const;

		Ice& operator=( const Ice& before);
		Ice( const Ice& before );
		Ice( void );
		~Ice();
};
