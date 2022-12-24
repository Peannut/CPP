/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:21:57 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/01 21:47:06 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_
# include <iostream>

class Fixed
{
    private:
        int              fixed_points;
        static const int fractional_bit = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed& operator=(Fixed const &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif