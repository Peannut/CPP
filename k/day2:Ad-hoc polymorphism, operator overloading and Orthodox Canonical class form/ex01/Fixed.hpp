/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:59:54 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/10 01:13:52 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _raw;
		static const int _bits;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
};

std::ostream& operator<<(std ::ostream &o, Fixed const & rhs);

#endif