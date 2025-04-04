/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:23:17 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:23:20 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == this->materias[i]->getType())
		{
			std::cout << "Created the materia " << type << std::endl;
			return (this->materias[i]->clone());
		}
	}
	std::cout << "Can't create the materia" << std::endl;
	return (NULL);
}

void MateriaSource::learnMateria( AMateria* materia )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->materias[i] && materia)
		{
			this->materias[i] = materia;
			std::cout << "The materia " << materia->getType() << " has been learned" << std::endl;
			return ;
		}
	}
	std::cout << "The Materia can't be learned" << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& before )
{
	std::cout << "Copy MateriaSoure Assigment Operator called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = before.materias[i];
	return (*this);
}

MateriaSource::MateriaSource( const MateriaSource& before )
{
	std::cout << "Copy MateriaSource Constructor called" << std::endl;
	*this = before;
}

MateriaSource::MateriaSource( void )
{
	std::cout << "Default MateriaSource Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = NULL;
	
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete materias[i];
	}
	std::cout << "Default MateriaSource Destructor called" << std::endl;
	
}
