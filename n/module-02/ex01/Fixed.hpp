/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:37:45 by nelidris          #+#    #+#             */
/*   Updated: 2022/08/21 12:44:08 by nelidris         ###   ########.fr       */
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
		Fixed( void );
		Fixed( const int val );
		Fixed( const float val );
		Fixed(const Fixed&);
		~Fixed();
		Fixed&	operator=(const Fixed& obj);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& out, Fixed const & obj);

#endif