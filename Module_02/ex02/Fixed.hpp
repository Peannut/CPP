/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:02 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/02 18:05:40 by zoukaddo         ###   ########.fr       */
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
};

#endif