/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:22:06 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:22:10 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
	/*private:
		std::string type;*/

	public:
		virtual void use( ICharacter& target );
		virtual AMateria* clone() const;

		Cure& operator=( const Cure& before);
		Cure( const Cure& before );
		Cure( void );
		~Cure();
};
