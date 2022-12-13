/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/13 19:33:37 by zoukaddo         ###   ########.fr       */
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
        Fixed( const int value );
        Fixed ( const float value);
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat(void) const;
        int toInt(void) const;
        /***********/
        bool    operator>(const Fixed& obj);
        bool    operator<(const Fixed& obj);
        bool    operator>=(const Fixed& obj);
        bool    operator<=(const Fixed& obj);
        bool    operator==(const Fixed& obj);
        bool    operator!=(const Fixed& obj);
        /***********/
        Fixed   operator+(const Fixed& obj);
        Fixed   operator-(const Fixed& obj);
        Fixed   operator*(const Fixed& obj);
        Fixed   operator/(const Fixed& obj);
        /**********/
        Fixed& operator++();
        Fixed   operator++(int);
        Fixed& operator--();
        Fixed   operator--(int);
        /* static member functions */
        static const Fixed&    min(const Fixed& a, const Fixed& b);
        static Fixed&	min(Fixed& a, Fixed& b);
        static const Fixed&	max(const Fixed& a, const Fixed& b);
        static Fixed&	max(Fixed& a, Fixed& b);

};  

std::ostream& operator<<(std::ostream& os, Fixed const &other);

#endif