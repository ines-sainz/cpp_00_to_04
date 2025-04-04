/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:37:49 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 10:37:51 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource
{
	private:
		/* data */

	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria( AMateria*) = 0;
		virtual AMateria* createMateria( std::string const & type ) = 0;
};
