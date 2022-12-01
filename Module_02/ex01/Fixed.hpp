/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:11:33 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/01 22:05:27 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_
# include <iostream>
# include <math.h>

class Fixed
{
    private:
        int              fixed_points;
        static const int fractional_bit = 8;
    
    public:
        Fixed();
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(Fixed const &other);
        Fixed(const Fixed &copy);
        Fixed(int const &copy);
        Fixed(const float &copy);

};


#endif