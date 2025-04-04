/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:21:33 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/14 09:21:36 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::use( int idx, ICharacter& target )
{
    if (idx >= 0 && idx < 4)
    {
        if (this->materias[idx])
        {
            this->materias[idx]->use(target);
            return ;
        }
    }
    std::cout << "Wrong index or materia to use" << std::endl;
}


void Character::unequip( int idx )
{
    if (idx >= 0 && idx < 4)
    {
        if (this->materias[idx])
            std::cout << "Unequipped Materia " << this->materias[idx]->getType() << std::endl;
        this->materias[idx] = NULL;
    }
}

void Character::equip(AMateria* m)
{
    if (m)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (!this->materias[i])
            {
                this->materias[i] = m;
                std::cout << "Equipped materia " << this->materias[i]->getType() << std::endl;
                return ;
            }
        }
    }
    std::cout << "Can't equip materia." << std::endl; 
}

std::string const & Character::getName() const
{
    return (this->name);
}

Character& Character::operator=( const Character& before)
{
    std::cout << "Copy Character Assignment Operator called" << std::endl;
    this->name = before.name;
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = before.materias[i]->clone();
    return (*this);
}

Character::Character( const Character& before)
{
    std::cout << "Copy Character Constructor called" << std::endl;
    *this = before;
}

Character::Character( std::string name )
{
    this->name = name;
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Character Constructor called" << std::endl;
}

Character::Character( void )
{
    this->name = "";
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Default Character Constructor called" << std::endl;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete materias[i];
    }
    
    std::cout << "Default Character Destructor called" << std::endl;
}
