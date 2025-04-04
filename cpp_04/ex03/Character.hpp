/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:21:42 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:21:44 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *materias[4];

    public:
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip( int idx );
        virtual void use( int idx, ICharacter& target );

        Character& operator=( const Character& before );
        Character( const Character& before );
        Character( std::string name );
        Character( void );
        ~Character();
};
