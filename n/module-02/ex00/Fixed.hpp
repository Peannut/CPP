/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <nors@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:37:45 by nelidris          #+#    #+#             */
/*   Updated: 2022/07/25 19:04:10 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class Fixed
{
	private:
		int fixed_num;
		static const int frac_bits = 8;

	public:
		Fixed( void );
		Fixed(const Fixed&);
		~Fixed();
		Fixed&	operator=(const Fixed& obj);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif