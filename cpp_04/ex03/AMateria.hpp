/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:21:20 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:21:26 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        virtual void use(ICharacter& target);
        virtual AMateria* clone() const = 0;
        std::string const & getType() const; //Returns the materia type
        AMateria( std::string const & type );
        AMateria& operator=( const AMateria& before );
        AMateria( const AMateria& before );
        AMateria( void );
        virtual ~AMateria();
};
