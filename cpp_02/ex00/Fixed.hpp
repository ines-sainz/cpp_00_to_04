/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:27:01 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/16 09:27:02 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	private:
		int	fixedPointNumValue;
		static const int	NumOfFractionalBits = 8;

	public:
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed(const Fixed& before);
		Fixed& operator=(const Fixed& before);
		Fixed( void );
		~Fixed();
};
