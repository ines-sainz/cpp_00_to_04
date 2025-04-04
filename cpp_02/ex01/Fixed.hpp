/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:35:25 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/16 11:35:26 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>
# include <ostream>

class Fixed
{
	private:
		int	fixedPointNumValue;
		static const int	NumOfFractionalBits = 8;

	public:
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed(const int integer);
		Fixed(const float floatNum);

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed& operator=(const Fixed& before);
		Fixed(const Fixed& before);
		Fixed( void );
		~Fixed();
};

std::ostream& operator<<(std::ostream &out, Fixed const &classToPrint);