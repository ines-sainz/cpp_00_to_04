/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:23:29 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:23:32 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias[4];

	public:
		AMateria* createMateria( std::string const & type );
		void learnMateria( AMateria* materia );
	
		MateriaSource& operator=( const MateriaSource& before );
		MateriaSource( const MateriaSource& before );
		MateriaSource( void );
		~MateriaSource();
};
