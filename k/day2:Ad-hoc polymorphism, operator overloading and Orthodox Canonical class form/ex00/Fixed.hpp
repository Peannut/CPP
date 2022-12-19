/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:24:36 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/21 20:50:52 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int _bits;
	public:
		Fixed();
		Fixed(Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif