/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/09 16:24:32 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_
#include <iostream>
#include <math.h>

class Fixed
{
    private:
        static const int fractional_bits = 8;
        int              fixed_points;
    public:
		Fixed();
    	~Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int &copy);
        Fixed(const float &copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float   toFloat() const;
        int     toInt() const;
        bool    operator>(Fixed const &obj) const;
        bool    operator<(Fixed const &obj) const;
        bool    operator>=(Fixed const &obj) const;
        bool    operator<=(Fixed const &obj) const;
        bool    operator==(Fixed const &obj) const;
        bool    operator!=(Fixed const &obj) const;
        float   operator+(Fixed const &obj) const;
        // float   operator-(Fixed const &obj) const;
        // float   operator*(Fixed const &obj) const;
        // float   operator/(Fixed const &obj) const;
        Fixed& operator++();
        Fixed   operator++( int );
        Fixed&  operator--();
        Fixed   operator--(int);
        Fixed&  operator=(Fixed const &other);
        Fixed   operator*(Fixed const &obj) const;
        Fixed	operator-(const Fixed& obj);
        Fixed	operator/(Fixed const &obj) const;

};  

std::ostream& operator<<(std::ostream& os, Fixed const &other);

#endif