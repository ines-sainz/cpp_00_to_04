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

/**
 * @brief Use the Materia at the specified index on a target character.
 * 
 * Checks if the index is valid and the Materia exists, then uses it on
 * the target. Prints an error message if index or Materia is invalid.
 * 
 * @param idx Index of the Materia to use (0-3).
 * @param target The character to apply the Materia effect to.
 */
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

/**
 * @brief Unequip the Materia at the given index.
 * 
 * If valid and Materia exists, it unequips it by setting pointer to NULL
 * and prints which Materia was unequipped.
 * 
 * @param idx Index of the Materia to unequip (0-3).
 */
void Character::unequip( int idx )
{
    if (idx >= 0 && idx < 4)
    {
        if (this->materias[idx])
            std::cout << "Unequipped Materia " << this->materias[idx]->getType() << std::endl;
        this->materias[idx] = NULL;
    }
}

/**
 * @brief Equip a new Materia into the first available slot.
 * 
 * If Materia pointer is not null, attempts to store it in the first
 * empty slot of the inventory. Prints success or failure message.
 * 
 * @param m Pointer to the Materia to equip.
 */
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

/**
 * @brief Gets the name of the character.
 * 
 * @return const std::string& The name of the character.
 */
std::string const & Character::getName() const
{
    return (this->name);
}

/**
 * @brief Copy assignment operator.
 * 
 * Copies the name and clones all Materia pointers from another character.
 * 
 * @param before The character to copy from.
 * @return Character& Reference to this character.
 */
Character& Character::operator=( const Character& before)
{
    std::cout << "Copy Character Assignment Operator called" << std::endl;
    this->name = before.name;
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = before.materias[i]->clone();
    return (*this);
}

/**
 * @brief Copy constructor.
 * 
 * Uses assignment operator to copy another character.
 * 
 * @param before The character to copy.
 */
Character::Character( const Character& before)
{
    std::cout << "Copy Character Constructor called" << std::endl;
    *this = before;
}

/**
 * @brief Constructor with a name.
 * 
 * Initializes the character with a given name and empty Materia slots.
 * 
 * @param name The name of the character.
 */
Character::Character( std::string name )
{
    this->name = name;
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Character Constructor called" << std::endl;
}

/**
 * @brief Default constructor.
 * 
 * Initializes with empty name and empty Materia slots.
 */
Character::Character( void )
{
    this->name = "";
    for (size_t i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Default Character Constructor called" << std::endl;
}

/**
 * @brief Destructor.
 * 
 * Deletes all equipped Materia to free memory and outputs a message.
 */
Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete materias[i];
    }
    
    std::cout << "Default Character Destructor called" << std::endl;
}
