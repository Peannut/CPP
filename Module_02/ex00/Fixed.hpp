/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:21:57 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/27 17:31:54 by zoukaddo         ###   ########.fr       */
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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(Fixed const &other);
        Fixed(const Fixed &copy);

};


#endif