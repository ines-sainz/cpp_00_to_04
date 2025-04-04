/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:09:42 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:43 by isainz-r         ###   ########.fr       */
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
		static Fixed&	min(Fixed& num1, Fixed& num2);
		static Fixed&	min(const Fixed& num1, const Fixed& num2);
		static Fixed&	max(Fixed& num1, Fixed& num2);
		static Fixed&	max(const Fixed& num1, const Fixed& num2);

		Fixed&	operator++(void); /* preIncrement */
		Fixed	operator++(int);
		Fixed&	operator--(void); /* preDecrement */
		Fixed	operator--(int);


		Fixed	operator+(const Fixed& toOperate);
		Fixed	operator-(const Fixed& toOperate);
		Fixed	operator*(const Fixed& toOperate);
		Fixed	operator/(const Fixed& toOperate);

		bool	operator>(const Fixed& toCompare);
		bool	operator<(const Fixed& toCompare);
		bool	operator>=(const Fixed& toCompare);
		bool	operator<=(const Fixed& toCompare);
		bool	operator==(const Fixed& toCompare);
		bool	operator!=(const Fixed& toCompare);

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
