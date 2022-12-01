/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:37:45 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/21 15:37:19 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_num;
		static const int frac_bits = 8;

	public:
		/* constructors */
		Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed&);
		~Fixed();
		Fixed&	operator=(const Fixed& obj);
		
		/* comparison operators */
		bool		operator>(const Fixed& obj);
		bool		operator<(const Fixed& obj);
		bool		operator>=(const Fixed& obj);
		bool		operator<=(const Fixed& obj);
		bool		operator==(const Fixed& obj);
		bool		operator!=(const Fixed& obj);

		/* arithmetic operators */
		Fixed	operator+(const Fixed& obj);
		Fixed	operator-(const Fixed& obj);
		Fixed	operator*(const Fixed& obj);
		Fixed	operator/(const Fixed& obj);
		
		/* increment/decrement */
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		/* conversion and rawbits */
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);

		/* static member functions */

		static Fixed&	min(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif